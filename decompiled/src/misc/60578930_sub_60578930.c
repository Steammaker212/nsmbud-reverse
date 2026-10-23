/* sub_60578930
 * address: 0x60578930   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60578930(int a1)
{
  int v2; // r4
  _BYTE *v3; // r0
  int v5; // r3

  v2 = 1;
  FIELD_U32(a1, 7388) = 1;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U16(a1, 7376) = 0;
  FIELD_U8(a1, 7339) = 1;
  sub_60579AE4(a1);
  if ( sub_605D00B8(a1) == 1 )
  {
    v3 = *(_BYTE **)(a1 + 632);
    v2 = 2;
    if ( v3 )
    {
      *v3 = 1;
      return 2;
    }
  }
  else
  {
    sub_6057A244(a1, 1);
    FIELD_U32(a1, 572) = 0;
    FIELD_U32(a1, 576) = 0;
    FIELD_U32(a1, 580) = 0;
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 8.0;
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -8.0;
    FIELD_U32(a1, 7300) = 8;
    v5 = FIELD_U8(a1, 28);
    FIELD_U32(a1, 7304) = v5;
    FIELD_U32(a1, 500) = 1140850688;
    FIELD_U32(a1, 504) = 1140850688;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    FIELD_U32(a1, 7144) = FIELD_U32(a1, 20) & 0xF;
    MovementHandler__link((MovementHandler *)(a1 + 6992), (Vec3 *)(a1 + 108), 128, v5);
    MovementHandler__execute((MovementHandler *)(a1 + 6992));
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB10FC);
  }
  return v2;
}
