/* sub_60916550
 * address: 0x60916550   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60916550(int a1, unsigned int a2, const void *a3, __int16 a4)
{
  int v7; // r9
  int v8; // r5
  int v9; // r9
  int v10; // r8
  char v11; // r0
  int v12; // r1

  v7 = -1;
  v8 = FIELD_U32(a1, 192);
  if ( FIELD_U32(a1, 188) > a2 )
    v8 += 104 * a2;
  if ( !FIELD_U16(v8, 96) )
  {
    qmemcpy((void *)v8, a3, 0x60u);
    FIELD_U16(v8, 98) = a4;
    v9 = FIELD_U16(a1, 196);
    v10 = dword_60CCF464 + 308;
    sead__CriticalSection__lock(dword_60CCF464 + 308);
    v7 = v9 + a2;
    dword_60CC7430(dword_60CCF464 + 80);
    ++FIELD_U16(a1, 228);
    ++FIELD_U16(v8, 96);
    v11 = FIELD_U8(v8, 100);
    if ( (v11 & 1) == 0 )
    {
      v12 = FIELD_U32(a1, 200);
      if ( v12 < FIELD_U32(a1, 204) )
      {
        *(_DWORD *)(FIELD_U32(a1, 208) + 4 * v12) = v8;
        ++FIELD_U32(a1, 200);
        v11 = FIELD_U8(v8, 100);
      }
      FIELD_U8(v8, 100) = v11 | 1;
    }
    sub_608DECA0(a1 + 200, (int (__fastcall *)(_DWORD, _DWORD))sub_60916658);
    sead__CriticalSection__unlock(v10);
  }
  return v7;
}
