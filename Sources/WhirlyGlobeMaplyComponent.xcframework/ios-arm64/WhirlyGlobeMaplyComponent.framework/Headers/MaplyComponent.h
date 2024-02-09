/*
 *  MaplyComponent.h
 *  MaplyComponent
 *
 *  Created by Steve Gifford on 9/6/12.
 *  Copyright 2012-2017 mousebird consulting
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */

#import <WhirlyGlobeMaplyComponent/MaplyCoordinate.h>
#import <WhirlyGlobeMaplyComponent/MaplyCoordinateSystem.h>
#import <WhirlyGlobeMaplyComponent/MaplyMatrix.h>
#import <WhirlyGlobeMaplyComponent/MaplyVertexAttribute.h>
#import <WhirlyGlobeMaplyComponent/MaplyTexture.h>
#import <WhirlyGlobeMaplyComponent/MaplyRenderTarget.h>
#import <WhirlyGlobeMaplyComponent/MaplyVariableTarget.h>
#import <WhirlyGlobeMaplyComponent/MaplyLabel.h>
#import <WhirlyGlobeMaplyComponent/MaplyScreenLabel.h>
#import <WhirlyGlobeMaplyComponent/MaplyMarker.h>
#import <WhirlyGlobeMaplyComponent/MaplyScreenMarker.h>
#import <WhirlyGlobeMaplyComponent/MaplyShape.h>
#import <WhirlyGlobeMaplyComponent/MaplySticker.h>
#import <WhirlyGlobeMaplyComponent/MaplyBillboard.h>
#import <WhirlyGlobeMaplyComponent/MaplyParticleSystem.h>
#import <WhirlyGlobeMaplyComponent/MaplyVectorObject.h>
#import <WhirlyGlobeMaplyComponent/MaplyViewTracker.h>
#import <WhirlyGlobeMaplyComponent/MaplyViewController.h>
#import <WhirlyGlobeMaplyComponent/MaplyQuadPagingLayer.h>
#import <WhirlyGlobeMaplyComponent/MaplyQuadSampler.h>
#import <WhirlyGlobeMaplyComponent/MaplyRemoteTileFetcher.h>
#import <WhirlyGlobeMaplyComponent/MaplyMBTileFetcher.h>
#import <WhirlyGlobeMaplyComponent/MaplyUpdateLayer.h>
#import <WhirlyGlobeMaplyComponent/MaplyQuadImageTilesLayer.h>
#import <WhirlyGlobeMaplyComponent/MaplyQuadImageOfflineLayer.h>
#import <WhirlyGlobeMaplyComponent/MaplyQuadImageLoader.h>
#import <WhirlyGlobeMaplyComponent/MaplyQuadImageFrameLoader.h>
#import <WhirlyGlobeMaplyComponent/MaplyBlankTileSource.h>
#import <WhirlyGlobeMaplyComponent/MaplyTileSource.h>
#import <WhirlyGlobeMaplyComponent/MaplyWMSTileSource.h>
#import <WhirlyGlobeMaplyComponent/MaplyMBTileSource.h>
#import <WhirlyGlobeMaplyComponent/MaplyGDALRetileSource.h>
#import <WhirlyGlobeMaplyComponent/MaplyRemoteTileSource.h>
#import <WhirlyGlobeMaplyComponent/MaplyMultiplexTileSource.h>
#import <WhirlyGlobeMaplyComponent/MaplyAnimationTestTileSource.h>
#import <WhirlyGlobeMaplyComponent/MaplyPagingVectorTestTileSource.h>
#import <WhirlyGlobeMaplyComponent/MaplyElevationSource.h>
#import <WhirlyGlobeMaplyComponent/MaplyElevationDatabase.h>
#import <WhirlyGlobeMaplyComponent/MaplyIconManager.h>
#import <WhirlyGlobeMaplyComponent/MaplyTextureBuilder.h>
#import <WhirlyGlobeMaplyComponent/MaplyGeomModel.h>
#import <WhirlyGlobeMaplyComponent/MaplyVertexAttribute.h>
#import <WhirlyGlobeMaplyComponent/MaplyQuadTracker.h>
#import <WhirlyGlobeMaplyComponent/MaplyStarsModel.h>
#import <WhirlyGlobeMaplyComponent/MaplySun.h>
#import <WhirlyGlobeMaplyComponent/MaplyAtmosphere.h>
#import <WhirlyGlobeMaplyComponent/MaplyMoon.h>
#import <WhirlyGlobeMaplyComponent/MaplyRemoteTileElevationSource.h>
#import <WhirlyGlobeMaplyComponent/MaplyPoints.h>
#import <WhirlyGlobeMaplyComponent/MaplyGeomBuilder.h>
#import <WhirlyGlobeMaplyComponent/MaplyColorRampGenerator.h>
#import <WhirlyGlobeMaplyComponent/MaplyAerisTiles.h>

#import <WhirlyGlobeMaplyComponent/MaplyLAZQuadReader.h>
#import <WhirlyGlobeMaplyComponent/MaplyVectorTiles.h>
#import <WhirlyGlobeMaplyComponent/MapboxVectorTiles.h>
#import <WhirlyGlobeMaplyComponent/MapboxVectorTilesPagingDelegate.h>
#import <WhirlyGlobeMaplyComponent/MapboxVectorImageInterpreter.h>
#import <WhirlyGlobeMaplyComponent/MapboxMultiSourceTileInfo.h>
#import <WhirlyGlobeMaplyComponent/MaplyVectorStyleSimple.h>
#import <WhirlyGlobeMaplyComponent/SLDStyleSet.h>
#import <WhirlyGlobeMaplyComponent/MapboxVectorStyleSet.h>
#import <WhirlyGlobeMaplyComponent/MapboxVectorStyleFill.h>
#import <WhirlyGlobeMaplyComponent/MapboxVectorStyleBackground.h>
#import <WhirlyGlobeMaplyComponent/MapboxVectorStyleLine.h>
#import <WhirlyGlobeMaplyComponent/MapboxVectorStyleRaster.h>
#import <WhirlyGlobeMaplyComponent/MapboxVectorStyleSymbol.h>
#import <WhirlyGlobeMaplyComponent/MapboxVectorStyleCircle.h>
#import <WhirlyGlobeMaplyComponent/NSDictionary+StyleRules.h>
#import <WhirlyGlobeMaplyComponent/MaplyVectorTileStyle.h>
#import <WhirlyGlobeMaplyComponent/MaplyVectorTileTextStyle.h>
#import <WhirlyGlobeMaplyComponent/SLDWellKnownMarkers.h>       // Check if Needed
#import <WhirlyGlobeMaplyComponent/MaplyVectorTileMarkerStyle.h>
#import <WhirlyGlobeMaplyComponent/GeoJSONSource.h>
#import <WhirlyGlobeMaplyComponent/MaplyVectorTilePolygonStyle.h>
#import <WhirlyGlobeMaplyComponent/Maply3dTouchPreviewDelegate.h>
#import <WhirlyGlobeMaplyComponent/MapnikStyleSet.h>
#import <WhirlyGlobeMaplyComponent/MapnikStyleRule.h>           // Check if Needed
#import <WhirlyGlobeMaplyComponent/MapnikStyle.h>               // Check if Needed
#import <WhirlyGlobeMaplyComponent/NSData+Zlib.h>
#import <WhirlyGlobeMaplyComponent/MaplyVectorTileLineStyle.h>
#import <WhirlyGlobeMaplyComponent/MaplySphericalQuadEarthWithTexGroup.h>
//#import <WhirlyGlobeMaplyComponent/SLDExpressions.h>
//#import <WhirlyGlobeMaplyComponent/SLDOperators.h>
//#import <WhirlyGlobeMaplyComponent/SLDSymbolizers.h>
#import <WhirlyGlobeMaplyComponent/MaplyPagingElevationTestTileSource.h>

