/* sub_60958220
 * address: 0x60958220   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60958220(_DWORD *a1, int a2, unsigned int a3, _DWORD *a4, unsigned int a5, int a6)
{
  void *v10; // r9
  int v11; // r0
  signed int v12; // r7
  bool v13; // cc
  signed int v14; // r0
  int v15; // r1
  _DWORD *v16; // r0
  int *v17; // r1
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r1
  int v22; // r1
  int v23; // r1
  const void *v25; // [sp+0h] [bp-28h]

  FIELD_U32(a2, 20) = a1;
  v10 = *(void **)(a2 + 148);
  (*(void (__fastcall **)(_DWORD *))(*a4 + 12))(a4);
  if ( v10 != (void *)a4[1] )
  {
    v25 = (const void *)a4[1];
    (*(void (__fastcall **)(_DWORD *))(*a4 + 12))(a4);
    v11 = a4[1];
    v12 = 0;
    while ( *(_BYTE *)(v11 + v12) )
    {
      if ( !*(_BYTE *)(v11 + v12 + 1) )
      {
        ++v12;
        break;
      }
      if ( !*(_BYTE *)(v11 + v12 + 2) )
      {
        v12 += 2;
        break;
      }
      v13 = v12 + 2 < 0x80000;
      v12 += 3;
      if ( !v13 )
      {
        v12 = 0;
        break;
      }
    }
    v14 = FIELD_U32(a2, 152);
    if ( v12 >= v14 )
      v12 = v14 - 1;
    qmemcpy(v10, v25, v12);
    *((_BYTE *)v10 + v12) = 0;
  }
  FIELD_U16(a2, 80) |= 0x40u;
  FIELD_U32(a2, 92) = a3;
  sub_60955570(a2, a5);
  sub_609548CC((_DWORD *)a2, a6);
  v15 = a1[7];
  if ( a1[6] > a5 )
    v15 += 4 * a5;
  v16 = *(_DWORD **)v15;
  FIELD_U32(a2, 28) = *(_DWORD *)(*(_DWORD *)v15 + 2308);
  FIELD_U32(a2, 32) = v16[578];
  FIELD_U32(a2, 36) = v16[579];
  FIELD_U32(a2, 40) = v16[580];
  FIELD_U32(a2, 44) = v16[581];
  sead__CriticalSection__lock((int)(a1 + 200));
  v17 = (int *)a1[9];
  if ( a1[8] > a3 )
    v17 += a3;
  *v17 = a2;
  v18 = a1[11];
  if ( a1[10] > a3 )
    v18 += 28 * a3;
  sub_609728A4(v18, 0, a2, a6);
  v19 = a1[13];
  if ( a1[12] > a3 )
    v19 += 28 * a3;
  sub_609728A4(v19, 1, a2, a6);
  v20 = a1[15];
  if ( a1[14] > a3 )
    v20 += 28 * a3;
  sub_609728A4(v20, 4, a2, a6);
  v21 = a1[11];
  if ( a1[10] > a3 )
    v21 += 28 * a3;
  FIELD_U32(a2, 132) = v21;
  v22 = a1[13];
  if ( a1[12] > a3 )
    v22 += 28 * a3;
  FIELD_U32(a2, 136) = v22;
  v23 = a1[15];
  if ( a1[14] > a3 )
    v23 += 28 * a3;
  FIELD_U32(a2, 140) = v23;
  a1[62] |= 1u;
  return sead__CriticalSection__unlock((int)(a1 + 200));
}
