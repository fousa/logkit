//
//  FileTypeSpec.swift
//  TrackKit
//
//  Created by Jelle Vandebeeck on 29/09/2016.
//  Copyright © 2016 CocoaPods. All rights reserved.
//

import Quick
import Nimble
import TrackKit

class FileTypeSpec: QuickSpec {
    override func spec() {
        fdescribe("File Type") {
            context("GPX") {
                it("Should parse gpx as gpx type") {
                    expect { try ImprovedFileType(fileExtension: "gpx") }.notTo(throwError())
                }

                it("Should parse GPX as gpx type") {
                    expect { try ImprovedFileType(fileExtension: "GPX") }.notTo(throwError())
                }
            }

//            context("TCX") {
//                it("Should parse tcx as tcx type") {
//                    let type = TrackType(fileExtension: "tcx")
//                    expect(type).toNot(beNil())
//                    expect(type?.rawValue) == "tcx"
//                }
//
//                it("Should parse TCX as tcx type") {
//                    let type = TrackType(fileExtension: "TCX")
//                    expect(type).toNot(beNil())
//                    expect(type?.rawValue) == "tcx"
//                }
//            }
//
//            context("FIT") {
//                it("Should parse fit as fit type") {
//                    let type = TrackType(fileExtension: "fit")
//                    expect(type).toNot(beNil())
//                    expect(type?.rawValue) == "fit"
//                }
//
//                it("Should parse FIT as fit type") {
//                    let type = TrackType(fileExtension: "FIT")
//                    expect(type).toNot(beNil())
//                    expect(type?.rawValue) == "fit"
//                }
//            }
//
//            context("LOC") {
//                it("Should parse loc as loc type") {
//                    let type = TrackType(fileExtension: "loc")
//                    expect(type).toNot(beNil())
//                    expect(type?.rawValue) == "loc"
//                }
//
//                it("Should parse LOC as loc type") {
//                    let type = TrackType(fileExtension: "LOC")
//                    expect(type).toNot(beNil())
//                    expect(type?.rawValue) == "loc"
//                }
//            }
//
//            context("NMEA") {
//                it("Should parse nmea as nmea type") {
//                    let type = TrackType(fileExtension: "nmea")
//                    expect(type).toNot(beNil())
//                    expect(type?.rawValue) == "nmea"
//                }
//
//                it("Should parse NMEA as nmea type") {
//                    let type = TrackType(fileExtension: "NMEA")
//                    expect(type).toNot(beNil())
//                    expect(type?.rawValue) == "nmea"
//                }
//            }
//
//            context("TRACK JSON") {
//                it("Should parse track as track type") {
//                    let type = TrackType(fileExtension: "track")
//                    expect(type).toNot(beNil())
//                    expect(type?.rawValue) == "track"
//                }
//
//                it("Should parse TRACK as track type") {
//                    let type = TrackType(fileExtension: "TRACK")
//                    expect(type).toNot(beNil())
//                    expect(type?.rawValue) == "track"
//                }
//            }

            context("Unknown") {
                it("Should not parse the type") {
                    expect {
                        try ImprovedFileType(fileExtension: "unknown")
                    }.to(throwError(ImprovedParserError.unknownFileType))
                }
            }
        }
    }
}
