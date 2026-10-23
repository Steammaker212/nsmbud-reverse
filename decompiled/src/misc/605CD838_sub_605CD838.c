/* sub_605CD838
 * address: 0x605CD838   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605CD838(int a1)
{
  int v2; // r1
  int v3; // r0
  int v4; // s2
  int *v5; // r1

  if ( !FIELD_U8(a1, 92) )
  {
    v2 = FIELD_U32(a1, 60);
    v3 = -v2;
    if ( !FIELD_U8(a1, 106) )
    {
      v3 = FIELD_U32(a1, 60);
      v2 = -v2;
    }
    v4 = (int)(float)((float)v3 + (float)(FIELD_F32(a1, 56) * (float)(v2 - v3)));
    FIELD_U32(a1, 64) = v4;
    **(_DWORD **)(a1 + 36) += v4;
    if ( FIELD_U8(a1, 101) )
    {
      v5 = &dword_60CB0FE4;
LABEL_8:
      StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v5);
      return;
    }
    if ( ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(
           a1 + 56,
           0.0,
           0.03125,
           0.03125,
           0.0039062) == 0.0 )
    {
      v5 = &dword_60CB0FC4;
      goto LABEL_8;
    }
    if ( FIELD_F32(a1, 56) < 0.3 )
      FIELD_U8(a1, 100) = 1;
  }
}
