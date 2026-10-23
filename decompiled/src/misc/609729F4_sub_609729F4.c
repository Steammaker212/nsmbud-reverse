/* sub_609729F4
 * address: 0x609729F4   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609729F4(_DWORD *a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r7
  int v5; // r0
  int (**v6)(); // [sp+0h] [bp-1C8h] BYREF
  const char *v7; // [sp+4h] [bp-1C4h]
  _BYTE v8[448]; // [sp+8h] [bp-1C0h] BYREF

  if ( a1[4] || (result = a1[3] | 4, result != 4) )
  {
    v2 = *(_DWORD *)(a1[5] + 2296);
    sub_60913508((int)v8);
    switch ( a1[3] )
    {
      case 0:
        sub_60975F70(a1[5], v8, a1[4], 258 * *(_DWORD *)(a1[4] + 92) + 0xFFFF);
        break;
      case 1:
        sub_60976398(a1[5], v8, a1[4], 258 * *(_DWORD *)(a1[4] + 92) + 0xFFFF);
        break;
      case 2:
        v6 = &sead__SafeStringBase__vtable;
        v7 = "agl__lyr__Renderer__begin";
        v4 = ((int (__fastcall *)(int, _BYTE *, int (***)(), _DWORD))sub_60977248)(v2, v8, &v6, 0);
        sub_6097597C(a1[5], v8);
        goto LABEL_8;
      case 3:
        v6 = &sead__SafeStringBase__vtable;
        v7 = "agl__lyr__Renderer__end";
        v4 = ((int (__fastcall *)(int, _BYTE *, int (***)(), int))sub_60977248)(v2, v8, &v6, 131583);
        sub_609763D0(a1[5], v8);
LABEL_8:
        v5 = sub_60977398(v2, v8, v4);
        sub_609758B8(a1[5], v8, v5, 0);
        break;
      case 4:
        sub_6097642C(a1[5], v8, a1[4], *(_DWORD *)(a1[4] + 92) + 1);
        break;
      default:
        return sub_60913598((int)v8);
    }
    return sub_60913598((int)v8);
  }
  return result;
}
