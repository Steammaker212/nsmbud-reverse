/* sub_6092BB98
 * address: 0x6092BB98   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6092BB98(int a1, int a2, int a3, int a4)
{
  int v8; // r7
  int v9; // r0
  _BYTE v10[24]; // [sp+10h] [bp-F0h] BYREF
  _BYTE v11[216]; // [sp+28h] [bp-D8h] BYREF

  v8 = a1 + 340;
  sub_6093981C(a2, a1 + 340, a1 + 224, a3, 1.0, a4, 1, &dword_60B45CEC);
  v9 = FIELD_U32(a1, 184);
  if ( v9 == 1 )
  {
    ((void (__fastcall *)(_BYTE *, float, float, float))loc_6090E3D4)(
      v10,
      0.0,
      0.0,
      FIELD_F32(a1, 304) * FIELD_F32(a1, 336));
    sub_6090C7F8((int)v11, (int)v10, FIELD_F32(a1, 272), FIELD_F32(a1, 288));
    sub_6093ABE8(a2, v8, v11, a3, a4, 1, &dword_60B45CEC);
    nullsub_113();
  }
  else if ( !v9 )
  {
    sub_6090C344(
      (int)v11,
      FIELD_F32(a1, 272),
      FIELD_F32(a1, 288),
      FIELD_F32(a1, 320) * 0.017453,
      FIELD_F32(a1, 304));
    sub_6093ABE8(a2, v8, v11, a3, a4, 1, &dword_60B45CEC);
    nullsub_113();
  }
}
