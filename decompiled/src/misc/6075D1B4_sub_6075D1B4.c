/* sub_6075D1B4
 * address: 0x6075D1B4   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6075D1B4(int a1)
{
  int v2; // r2
  int v3; // r1
  int v4; // r1
  int v5; // r2
  int v6; // r1
  unsigned int result; // r0
  int (**v8)(); // [sp+0h] [bp-18h] BYREF
  const char *v9; // [sp+4h] [bp-14h]
  _DWORD v10[4]; // [sp+8h] [bp-10h] BYREF

  FIELD_U32(a1, 536) |= 2u;
  sub_6078E940(a1, FIELD_U32(a1, 24));
  v2 = FIELD_U32(a1, 20);
  v3 = FIELD_U32(a1, 24);
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "PB_star_color";
  sub_6078ED00(a1, v3, v2, v10, 0.0, v8, v9);
  v4 = FIELD_U32(a1, 1176);
  if ( v4 && (((1 << FIELD_U32(a1, 1152)) & 0xE) != 0 || FIELD_U8(a1, 1182)) )
  {
    sub_6078E940(a1, v4);
    v5 = FIELD_U32(a1, 20);
    v6 = FIELD_U32(a1, 1176);
    v8 = &sead__SafeStringBase__vtable;
    v9 = "PH_star_color";
    ((void (__fastcall *)(int, int, int, int (***)(), float))sub_6078ED00)(a1, v6, v5, &v8, 0.0);
  }
  result = sub_6078F0F8(a1);
  if ( result <= 2 )
    *(_DWORD *)(FIELD_U32(a1, 564) + 884) = result;
  return result;
}
