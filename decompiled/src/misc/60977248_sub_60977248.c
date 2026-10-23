/* sub_60977248
 * address: 0x60977248   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60977248(int a1, int a2, _DWORD *a3, int a4)
{
  int TlsValue; // r0
  int CurrentCoreNumber; // r0
  unsigned int *v8; // r0
  unsigned int v9; // r7
  _DWORD *v10; // r0
  int *v11; // r2
  int v12; // r5
  int v13; // r8
  unsigned int v14; // r3
  int v15; // r6
  int v16; // r9
  int v17; // r10
  unsigned int v18; // r1
  int v19; // r4
  int v20; // r2
  int v21; // r1
  char v23; // [sp+4h] [bp-4Ch]
  _DWORD v26[3]; // [sp+10h] [bp-40h] BYREF
  int v27; // [sp+1Ch] [bp-34h]
  _DWORD v28[12]; // [sp+20h] [bp-30h] BYREF

  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  if ( TlsValue )
    CurrentCoreNumber = TlsValue - 1;
  else
    CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
  v27 = CurrentCoreNumber;
  v8 = (unsigned int *)(a1 + 64);
  do
    v9 = __ldrex(v8);
  while ( __strex(v9 + 1, v8) );
  v10 = (_DWORD *)(a1 + 28 * v27);
  v11 = (int *)v10[18];
  v12 = v10[19];
  v13 = v10[20];
  v23 = v27;
  v14 = FIELD_U8(a1, 161);
  if ( v10[17] > v14 )
    v11 += 3 * v14;
  v15 = *v11;
  v16 = v11[1];
  v17 = v11[2];
  v18 = FIELD_U32(a1, 152);
  v19 = FIELD_U32(a1, 156);
  if ( v18 > v9 )
    v19 += 616 * v9;
  sub_60918D40(v19, v10[21] + v10[22], v10[23] - v10[22]);
  v20 = v13 - v12;
  v26[0] = v15;
  v26[1] = v16 + v12;
  v26[2] = v17;
  if ( (unsigned int)(v13 - v12) >= 0x400000 )
    v20 = 0x400000;
  sub_60918E08(__SPAIR64__(v26, v19), v20);
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  FIELD_U32(v19, 580) = a3[1];
  FIELD_U8(v19, 608) = v23;
  FIELD_U32(v19, 584) = a4;
  FIELD_U32(v19, 588) = 0;
  nn__os__GetSystemTick((nn__os *)v28);
  v21 = v28[1];
  FIELD_U32(v19, 592) = v28[0];
  FIELD_U32(v19, 596) = v21;
  sub_60913564(a2, v19);
  if ( !sub_60918EB8(v19) )
    return -1;
  return v9;
}
