//
//  TrackKit
//
//  Created by Jelle Vandebeeck on 30/12/2016.
//

import Quick
import Nimble
import Foundation
import TrackKit

class TRACKTrackSpec: QuickSpec {
    override func spec() {
        describe("tracks") {
            it("should not have tracks") {
                let content = [String: String]()
                let data = try! JSONEncoder().encode(content)
                let file = try! TrackParser(data: data, type: .track).parse()

                expect(file.tracks).to(beNil())
            }

            it("should not have tracks without a points") {
                let content = [
                    [String: String](),
                    [String: String](),
                ]
                let data = try! JSONEncoder().encode(content)
                let file = try! TrackParser(data: data, type: .track).parse()

                expect(file.tracks).to(beNil())
            }

            it("should have tracks") {
                let content = [
                    ["latitude":10, "longitude":10],
                    ["latitude":11, "longitude":11]
                ]
                let data = try! JSONEncoder().encode(content)
                let file = try! TrackParser(data: data, type: .track).parse()

                expect(file.locations?.count) == 2
            }
        }

        describe("track point data") {
            var point: Point!

            beforeEach {
                let content = [
                    [
                        "latitude": 41.2,
                        "longitude": -71.3,
                        "altitude": 1001,
                        "horizontalAccuracy": 10,
                        "verticalAccuracy": 20,
                        "course": 30,
                        "speed": 4,
                        "timestamp": 1234
                    ]
                ]
                let data = try! JSONEncoder().encode(content)
                let file = try! TrackParser(data: data, type: .track).parse()

                point = file.locations?.first!
            }

            it("should have a coordinate") {
                expect(point.coordinate?.latitude) == 41.2
                expect(point.coordinate?.longitude) == -71.3
            }

            it("should have an elevation") {
                expect(point.elevation) == 1001
            }

            it("should have a time") {
                expect(point.time?.description) == "2001-01-01 00:20:34 +0000"
            }

            it("should have a horizontal accuracy") {
                expect(point.horizontalAccuracy) == 10
            }
            
            it("should have a vertical accuracy") {
                expect(point.verticalAccuracy) == 20
            }
            
            it("should have a course") {
                expect(point.course) == 30
            }
            
            it("should have a speed") {
                expect(point.speed) == 4
            }
        }
    }
}
