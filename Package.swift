// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MaplyPackage",
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "MaplyPackage",
            targets: ["WhirlyGlobeMaplyComponent"]),
    ],
    targets: [
        // Targets are the basic building blocks of a package, defining a module or a test suite.
        // Targets can depend on other targets in this package and products from dependencies.
//        .target(
//            name: "AppBuilder",
//            dependencies: [
//                .product(name: "EwasAuthentication", package: "ios-authentication"),
//                "WhirlyGlobeMaplyComponent"
//            ],
//            resources: [.process("Resources/Others"),
//                        .copy("Resources/Maps")]
//        ),
//        .target(
//            name: "MaplyPackage",
//            dependencies: [
//                "WhirlyGlobeMaplyComponent"
//            ]
//        ),
        .binaryTarget(
            name: "WhirlyGlobeMaplyComponent",
            path: "Sources/WhirlyGlobeMaplyComponent.xcframework"
        )
    ]
)
