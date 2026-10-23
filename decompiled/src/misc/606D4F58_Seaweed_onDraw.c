/* Seaweed_onDraw
 * address: 0x606D4F58   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Seaweed_onDraw(Seaweed *this)
{
  int leafId; // r5
  int leafId_; // r0

  if ( FIELD_U32(this, 0x294) >= 1 )
  {
    leafId = 0;
    do
    {
      leafId_ = 0;
      if ( (unsigned int)leafId < 3 )
        leafId_ = leafId;
      DrawMgr_drawModel2(DrawMgr_instance, (_DWORD *)FIELD_U32(this, 0x284)[leafId_]);
      ++leafId;
    }
    while ( leafId < FIELD_U32(this, 0x294) );
  }
  return 1;
}
