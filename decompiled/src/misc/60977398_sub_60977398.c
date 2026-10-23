/* sub_60977398
 * address: 0x60977398   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60977398(int a1, int a2, unsigned int a3)
{
  int TlsValue; // r0
  int CurrentCoreNumber; // r0
  int v7; // r7
  _DWORD *v8; // r5
  int v9; // r0
  int v10; // r1
  int v11; // r1
  _DWORD v13[8]; // [sp+8h] [bp-20h] BYREF

  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  if ( TlsValue )
    CurrentCoreNumber = TlsValue - 1;
  else
    CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
  v7 = CurrentCoreNumber;
  v8 = *(_DWORD **)(a1 + 156);
  if ( FIELD_U32(a1, 152) > a3 )
    v8 += 154 * a3;
  v9 = sub_60918FC4((int)v8);
  v10 = a1 + 28 * v7;
  FIELD_U32(v10, 76) = (v9 + FIELD_U32(v10, 76) + 3) & 0xFFFFFFFC;
  FIELD_U32(v10, 88) = (FIELD_U32(v10, 88) + v8[143] + 7) & 0xFFFFFFF8;
  nn__os__GetSystemTick((nn__os *)v13);
  v11 = v13[1];
  v8[150] = v13[0];
  v8[151] = v11;
  return v8;
}
