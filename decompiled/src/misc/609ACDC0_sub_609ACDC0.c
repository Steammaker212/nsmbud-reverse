/* sub_609ACDC0
 * address: 0x609ACDC0   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609ACDC0(_DWORD *a1, int a2)
{
  int v4; // r6
  int TlsValue; // r0
  int CurrentCoreNumber; // r0
  int result; // r0
  unsigned int v8; // r0
  int v9; // r6
  int v10; // r3
  int v11; // r4
  int v12; // r5
  int v13; // r7
  int v14; // r3
  int v15; // r4
  int v16; // r5
  int v17; // r7
  int v18; // r3
  int v19; // r4
  int v20; // r5
  int v21; // r7
  __int16 v22; // r2
  int v23; // r3

  v4 = dword_60CD09F8;
  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  if ( TlsValue )
    CurrentCoreNumber = TlsValue - 1;
  else
    CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
  result = *(_DWORD *)(v4 + 608 * CurrentCoreNumber + 624);
  if ( (result & 1) != 0 )
  {
    v8 = a1[2];
    v9 = a1[6];
    if ( a1[5] > v8 )
      v9 += 272 * v8;
    v10 = FIELD_U32(a2, 4);
    v11 = FIELD_U32(a2, 8);
    v12 = FIELD_U32(a2, 12);
    v13 = FIELD_U32(a2, 16);
    *(_DWORD *)v9 = *(_DWORD *)a2;
    FIELD_U32(v9, 4) = v10;
    FIELD_U32(v9, 8) = v11;
    FIELD_U32(v9, 12) = v12;
    FIELD_U32(v9, 16) = v13;
    v14 = FIELD_U32(a2, 24);
    v15 = FIELD_U32(a2, 28);
    v16 = FIELD_U32(a2, 32);
    v17 = FIELD_U32(a2, 36);
    FIELD_U32(v9, 20) = FIELD_U32(a2, 20);
    FIELD_U32(v9, 24) = v14;
    FIELD_U32(v9, 28) = v15;
    FIELD_U32(v9, 32) = v16;
    FIELD_U32(v9, 36) = v17;
    v18 = FIELD_U32(a2, 44);
    v19 = FIELD_U32(a2, 48);
    v20 = FIELD_U32(a2, 52);
    v21 = FIELD_U32(a2, 56);
    FIELD_U32(v9, 40) = FIELD_U32(a2, 40);
    FIELD_U32(v9, 44) = v18;
    FIELD_U32(v9, 48) = v19;
    FIELD_U32(v9, 52) = v20;
    FIELD_U32(v9, 56) = v21;
    v22 = FIELD_U16(a2, 60);
    FIELD_U8(v9, 62) = FIELD_U8(a2, 62);
    FIELD_U16(v9, 60) = v22;
    sub_60917754(v9 + 64, a2 + 64);
    FIELD_U32(v9, 264) = FIELD_U32(a2, 264);
    result = a1[2];
    if ( result < a1[3] )
    {
      v23 = a1[6];
      if ( a1[5] > (unsigned int)result )
        v23 += 272 * result;
      *(_DWORD *)(a1[4] + 4 * result) = v23;
      result = a1[2] + 1;
      a1[2] = result;
    }
  }
  return result;
}
