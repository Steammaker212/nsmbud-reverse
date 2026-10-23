/* sub_60497510
 * address: 0x60497510   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60497510(int a1)
{
  _BYTE *v2; // r0
  int v3; // r0
  _DWORD *v4; // r5
  _DWORD *v5; // r4
  int result; // r0
  _DWORD v7[6]; // [sp+8h] [bp-18h] BYREF

  FIELD_U8(a1, 146856) = 1;
  FIELD_U32(a1, 146852) = 0x10000;
  v2 = (_BYTE *)sub_60834614();
  v3 = sub_603FD0B4(v2);
  FIELD_U32(a1, 146864) = v3;
  FIELD_U32(a1, 146860) = v3;
  v4 = (_DWORD *)sub_60834614();
  FIELD_U32(a1, 128724) = sub_603FCFF8((int)v4, 0);
  FIELD_U32(a1, 128728) = sub_603FCFF8((int)v4, 1);
  FIELD_U32(a1, 128732) = sub_603FCFF8((int)v4, 2);
  FIELD_U32(a1, 128736) = sub_603FCFF8((int)v4, 3);
  FIELD_U32(a1, 128740) = sub_603FCFF8((int)v4, 4);
  FIELD_U32(a1, 128744) = sub_603FCFF8((int)v4, 5);
  FIELD_U32(a1, 128748) = v4[10];
  FIELD_U32(a1, 128752) = v4[28];
  FIELD_U32(a1, 128756) = v4[46];
  FIELD_U32(a1, 128760) = v4[64];
  v5 = (_DWORD *)(a1 + 64);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = dword_60CA0710;
  result = sub_6047467C(v5, 0, v7, (int)&dword_60CA06FC, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C((int)v5, 0);
    if ( result )
      return (*(int (__fastcall **)(int))(*(_DWORD *)result + 104))(result);
  }
  return result;
}
