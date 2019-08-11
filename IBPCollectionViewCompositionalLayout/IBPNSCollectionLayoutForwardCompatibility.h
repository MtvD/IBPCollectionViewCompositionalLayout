#import "IBPNSCollectionLayoutAnchor.h"
#import "IBPNSCollectionLayoutBoundarySupplementaryItem.h"
#import "IBPNSCollectionLayoutContainer_Protocol.h"
#import "IBPNSCollectionLayoutDecorationItem.h"
#import "IBPNSCollectionLayoutDimension.h"
#import "IBPNSCollectionLayoutEdgeSpacing.h"
#import "IBPNSCollectionLayoutEnvironment_Protocol.h"
#import "IBPNSCollectionLayoutGroup.h"
#import "IBPNSCollectionLayoutGroupCustomItem.h"
#import "IBPNSCollectionLayoutItem.h"
#import "IBPNSCollectionLayoutSection.h"
#import "IBPNSCollectionLayoutSize.h"
#import "IBPNSCollectionLayoutSpacing.h"
#import "IBPNSCollectionLayoutSupplementaryItem.h"
#import "IBPNSCollectionLayoutVisibleItem.h"
#import "IBPUICollectionViewCompositionalLayout.h"
#import "IBPUICollectionViewCompositionalLayoutConfiguration.h"
#import "NSDirectionalEdgeInsets.h"
#import "NSDirectionalRectEdge.h"
#import "NSRectAlignment.h"
#import "IBPUICollectionLayoutSectionOrthogonalScrollingBehavior.h"

#if __IPHONE_OS_VERSION_MAX_ALLOWED < 130000
@compatibility_alias NSCollectionLayoutAnchor IBPNSCollectionLayoutAnchor;
@compatibility_alias NSCollectionLayoutBoundarySupplementaryItem IBPNSCollectionLayoutBoundarySupplementaryItem;
@compatibility_alias NSCollectionLayoutDecorationItem IBPNSCollectionLayoutDecorationItem;
@compatibility_alias NSCollectionLayoutDimension IBPNSCollectionLayoutDimension;
@compatibility_alias NSCollectionLayoutEdgeSpacing IBPNSCollectionLayoutEdgeSpacing;
@compatibility_alias NSCollectionLayoutGroup IBPNSCollectionLayoutGroup;
@compatibility_alias NSCollectionLayoutGroupCustomItem IBPNSCollectionLayoutGroupCustomItem;
@compatibility_alias NSCollectionLayoutItem IBPNSCollectionLayoutItem;
@compatibility_alias NSCollectionLayoutSection IBPNSCollectionLayoutSection;
@compatibility_alias NSCollectionLayoutSize IBPNSCollectionLayoutSize;
@compatibility_alias NSCollectionLayoutSpacing IBPNSCollectionLayoutSpacing;
@compatibility_alias NSCollectionLayoutSupplementaryItem IBPNSCollectionLayoutSupplementaryItem;
@compatibility_alias UICollectionViewCompositionalLayout IBPUICollectionViewCompositionalLayout;
@compatibility_alias UICollectionViewCompositionalLayoutConfiguration IBPUICollectionViewCompositionalLayoutConfiguration;
@protocol NSCollectionLayoutContainer <IBPNSCollectionLayoutContainer> @end
@protocol NSCollectionLayoutEnvironment <IBPNSCollectionLayoutEnvironment> @end
#endif
