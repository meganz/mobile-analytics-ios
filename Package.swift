// swift-tools-version:5.8
import PackageDescription

let package = Package(
    name: "MEGAAnalyticsShared",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "MEGAAnalyticsShared",
            targets: ["MEGAAnalyticsShared"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "MEGAAnalyticsShared",
            path: "./MEGAAnalyticsShared.xcframework"
        ),
    ]
)
