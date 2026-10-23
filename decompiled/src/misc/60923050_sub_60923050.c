/* sub_60923050
 * address: 0x60923050   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60923050(int a1)
{
  int v2; // r0
  int v3; // r0
  _DWORD *v4; // r7
  void *v5; // r5
  const void *v6; // r8
  int v7; // r0
  signed int v8; // r7
  bool v9; // cc
  signed int v10; // r0
  int result; // r0

  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 88))(a1);
  v3 = sub_608FDDF4(a1 + 64, "%s%d", (const char *)dword_60CCFCA8[6 * v2], FIELD_U16(a1, 108));
  v4 = (_DWORD *)default_ref(v3);
  v5 = *(void **)(a1 + 128);
  (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
  v6 = (const void *)v4[1];
  if ( v5 != v6 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
    v7 = v4[1];
    v8 = 0;
    while ( *(_BYTE *)(v7 + v8) )
    {
      if ( !*(_BYTE *)(v7 + v8 + 1) )
      {
        ++v8;
        break;
      }
      if ( !*(_BYTE *)(v7 + v8 + 2) )
      {
        v8 += 2;
        break;
      }
      v9 = v8 + 2 < 0x80000;
      v8 += 3;
      if ( !v9 )
      {
        v8 = 0;
        break;
      }
    }
    v10 = FIELD_U32(a1, 132);
    if ( v8 >= v10 )
      v8 = v10 - 1;
    qmemcpy(v5, v6, v8);
    *((_BYTE *)v5 + v8) = 0;
  }
  *(_DWORD *)(FIELD_U32(a1, 32) + 484) |= 1u;
  result = FIELD_U8(a1, 48);
  if ( FIELD_U8(a1, 48) )
  {
    FIELD_U8(a1, 48) = 0;
    result = FIELD_U32(a1, 32);
    FIELD_U32(result, 484) |= 1u;
  }
  return result;
}
