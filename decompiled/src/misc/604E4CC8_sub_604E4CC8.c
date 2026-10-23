/* sub_604E4CC8
 * address: 0x604E4CC8   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E4CC8(int *a1)
{
  unsigned int v2; // r5
  int v3; // r1
  int v4; // r1
  _DWORD v6[6]; // [sp+8h] [bp-18h] BYREF

  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = dword_60CA5A80;
  if ( sub_6047467C((_DWORD *)a1[1], 0xAu, v6, (int)&dword_60CA5C68, 1.0, 0) == 1 && sub_6047482C(a1[1], 0xAu) )
  {
    (*(void (__fastcall **)(_DWORD *))(v6[0] + 12))(v6);
    (*(void (__fastcall **)(_DWORD *))(v6[0] + 12))(v6);
  }
  if ( dword_60C99DE4 )
  {
    v2 = FIELD_U16(dword_60C99DE4, 30) + a1[138];
    if ( v2 > sub_603FC698() )
      v2 = sub_603FC698();
    v3 = a1[15708];
    if ( v3 )
      sub_6047DEC8((_DWORD *)a1[1], v3, 1, v2);
    v4 = a1[15709];
    if ( v4 )
      sub_6047DEC8((_DWORD *)a1[1], v4, 1, v2);
  }
  a1[1143] = 9;
  return 4572;
}
