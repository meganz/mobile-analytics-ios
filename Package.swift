// swift-tools-version:5.8
import PackageDescription

let package = Package(
    name: "MEGAAnalyticsiOS",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "MEGAAnalyticsiOS",
            targets: ["MEGAAnalyticsiOS"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "MEGAAnalyticsiOS",
            path: "./MEGAAnalyticsiOS.xcframework"
        ),
    ]
)
