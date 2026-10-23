/* sub_605DB0B0
 * address: 0x605DB0B0   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DB0B0(int a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  float v4; // s0
  int v5; // r2
  int v7; // r0
  float v8; // s16

  v3 = (_DWORD *)(a1 + 6804);
  v2 = FIELD_U32(a1, 6804);
  if ( (v2 & 1) != 0 )
  {
    if ( (FIELD_U8(a1, 6260) & 0x10) == 0 )
      FIELD_U32(a1, 124) = 0;
  }
  else if ( (FIELD_U8(a1, 6808) & 1) != 0 )
  {
    v4 = FIELD_F32(a1, 180);
    if ( v4 != 0.0 )
      FIELD_F32(a1, 636) = v4;
  }
  FIELD_U32(a1, 6812) = 0;
  FIELD_U32(a1, 6816) = 0;
  if ( (v2 & 0x10) != 0 )
  {
    FIELD_U32(a1, 6812) = 0;
    FIELD_U32(a1, 6816) = -1098907648;
    FIELD_U32(a1, 124) = 0;
  }
  if ( sub_605DB274(a1) == 1 )
  {
    v5 = 1;
    return sub_605E0870(a1, &dword_60CB19C0, v5);
  }
  v7 = FIELD_U32(a1, 6856);
  if ( (unsigned int)(v7 - 3) <= 2 && (float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 576)) <= FIELD_F32(a1, 6852) )
  {
    if ( v7 == 5 )
      SE_OBJ_CMN_SPLASH_POISON_ref_5E4DE0(a1);
    else
      SE_OBJ_CMN_SPLASH_LAVA_ref_5E4E30(a1, v7 == 4);
    v5 = 0;
    return sub_605E0870(a1, &dword_60CB19C0, v5);
  }
  if ( (FIELD_U16(a1, 6264) & 0x2001) == 0 )
  {
    v8 = FIELD_F32(EnemyCounterMaybe_instance, 16) + 0.0;
    if ( v8 > 0.0 && !sub_605E1B48(a1) && FIELD_F32(a1, 108) > (float)(v8 + -1.0) )
    {
      *v3 |= 0x80u;
      FIELD_F32(a1, 108) = v8 + -1.0;
    }
  }
  return sub_605DB3FC(a1);
}
