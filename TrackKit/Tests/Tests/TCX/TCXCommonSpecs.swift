//
//  TCXCommonTests.swift
//  TrackKit
//
//  Created by Jelle Vandebeeck on 30/09/2016.
//  Copyright © 2016 CocoaPods. All rights reserved.
//

import Quick
import Nimble
import TrackKit

class TCXCommonSpec: QuickSpec {
    override func spec() {
        var file: File!

        describe("common data") {
            beforeEach {
                let content = "<TrainingCenterDatabase xmlns='http://www.garmin.com/xmlschemas/TrainingCenterDatabase/v2'>"
                                // Author
                                + "<Author>"
                                    + "<Name>Jelle Vandebeeck</Name>"
                                    + "<Build>"
                                        + "<Version>"
                                            + "<VersionMajor>1</VersionMajor>"
                                            + "<VersionMinor>2</VersionMinor>"
                                            + "<BuildMajor>3</BuildMajor>"
                                            + "<BuildMinor>4</BuildMinor>"
                                        + "</Version>"
                                    + "</Build>"
                                    + "<LangID>en</LangID>"
                                    + "<PartNumber>000-00000-00</PartNumber>"
                                + "</Author>"
                            + "</TrainingCenterDatabase>"
                let data = content.data(using: .utf8)
                file = try! TrackParser(data: data, type: .tcx).parse()
            }

            context("metadata") {
                it("should have an author name") {
                    expect(file.applicationAuthor?.name) == "Jelle Vandebeeck"
                }

                it("should have an author version number") {
                    expect(file.applicationAuthor?.version?.versionNumber) == "1.2"
                }

                it("should have an author build number") {
                    expect(file.applicationAuthor?.version?.buildNumber) == "3.4"
                }

                it("should have an author language") {
                    expect(file.applicationAuthor?.language) == "en"
                }

                it("should have an author part number") {
                    expect(file.applicationAuthor?.partNumber) == "000-00000-00"
                }
            }

            context("empty file") {
                beforeEach {
                    let content = "<TrainingCenterDatabase xmlns='http://www.garmin.com/xmlschemas/TrainingCenterDatabase/v2'></TrainingCenterDatabase>"
                    let data = content.data(using: .utf8)
                    file = try! TrackParser(data: data, type: .tcx).parse()
                }

                context("metadata") {
                    it("should not have an author name") {
                        expect(file.applicationAuthor?.name).to(beNil())
                    }

                    it("should not have an author version number") {
                        expect(file.applicationAuthor?.version?.versionNumber).to(beNil())
                    }

                    it("should not have an author build number") {
                        expect(file.applicationAuthor?.version?.buildNumber).to(beNil())
                    }

                    it("should not have an author language") {
                        expect(file.applicationAuthor?.language).to(beNil())
                    }

                    it("should not have an author part number") {
                        expect(file.applicationAuthor?.partNumber).to(beNil())
                    }
                }
            }
        }
    }
}
