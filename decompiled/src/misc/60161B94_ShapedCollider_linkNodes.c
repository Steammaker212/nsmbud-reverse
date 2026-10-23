/* ShapedCollider_linkNodes
 * address: 0x60161B94   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ShapedCollider *__fastcall ShapedCollider_linkNodes(
        ShapedCollider *result,
        signed int nodeCount,
        ColliderNode *nodes1,
        ColliderNode *nodes2,
        ColliderNode *nodes3)
{
  if ( nodeCount >= 1 && nodes1 )
  {
    FIELD_U32(result, 0x154) = nodeCount;
    FIELD_U32(result, 0x158) = (int)nodes1;
  }
  if ( nodeCount >= 1 && nodes2 )
  {
    FIELD_U32(result, 0x15C) = nodeCount;
    FIELD_U32(result, 0x160) = (int)nodes2;
  }
  if ( nodeCount >= 1 )
  {
    if ( nodes3 )
    {
      FIELD_U32(result, 0x164) = nodeCount;
      FIELD_U32(result, 0x168) = (int)nodes3;
    }
  }
  return result;
}
