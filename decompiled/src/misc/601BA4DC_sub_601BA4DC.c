/* sub_601BA4DC
 * address: 0x601BA4DC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601BA4DC(int a1)
{
  int v2; // r5
  _DWORD *v3; // r0
  int v4; // s2

  v2 = sub_601CF9C0(dword_60C8AEF0);
  if ( FIELD_U32(a1, 1080) == 3 )
    v3 = (_DWORD *)sub_601E0040(a1 + 1160);
  else
    v3 = (_DWORD *)(v2 + 80);
  FIELD_U32(a1, 984) = *v3;
  FIELD_U32(a1, 988) = v3[1];
  FIELD_U32(a1, 992) = v3[2];
  FIELD_U32(a1, 1020) = FIELD_U32(a1, 180);
  FIELD_F64(a1, 960) = sub_601BA56C(a1, a1 + 984, FIELD_U32(v2, 180));
  FIELD_U32(a1, 968) = v4;
  FIELD_U32(a1, 1108) &= 0xFFFFFFFC;
  FIELD_U8(a1, 664) = 1;
  return 1;
}
