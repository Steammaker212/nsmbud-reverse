/* timg___Combined_bntx_ref
 * address: 0x6098AD88   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall timg___Combined_bntx_ref(sead_IDisposer *a1, int a2, _DWORD *a3, const char *a4)
{
  signed int v8; // r6
  void *vtable; // r10
  const void *v10; // r9
  int v11; // r0
  bool v12; // cc
  signed int containingHeap; // r0
  _DWORD *v14; // r0
  int v15; // r2
  unsigned int v16; // r0
  bool v17; // zf
  _DWORD *v18; // r5
  _DWORD *v19; // r8
  nn__util__BinaryBlockHeader *v20; // r0
  char *v21; // r6
  int BlockSize_const; // r0
  unsigned int v24; // [sp+4h] [bp-64h] BYREF
  int v25; // [sp+8h] [bp-60h]
  _DWORD v26[7]; // [sp+Ch] [bp-5Ch] BYREF
  int v27; // [sp+28h] [bp-40h] BYREF
  int v28; // [sp+2Ch] [bp-3Ch]
  char *v29; // [sp+30h] [bp-38h]
  int v30; // [sp+34h] [bp-34h]
  int v31; // [sp+38h] [bp-30h]
  int v32; // [sp+3Ch] [bp-2Ch]
  int v33; // [sp+40h] [bp-28h]
  int v34; // [sp+44h] [bp-24h]

  sead_IDisposer_ctor(a1);
  v8 = 0;
  FIELD_U32(a1, 0x0) = (int)off_60C5FF88;
  FIELD_U32(a1 + (2) * 16, 0x0) = (int)&FIELD_U32(a1 + (2) * 16, 0x8);
  FIELD_U32(a1 + (1) * 16, 0x0) = 0;
  FIELD_U32(a1 + (1) * 16, 0x4) = 0;
  FIELD_U32(a1 + (1) * 16, 0x8) = a2;
  FIELD_U32(a1 + (1) * 16, 0xC) = (int)&BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1 + (2) * 16, 0x4) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&FIELD_U32(a1 + (1) * 16, 0xC));
  FIELD_U32(a1 + (1) * 16, 0xC) = (int)&off_60BD4C08;
  vtable = (void *)FIELD_U32(a1 + (2) * 16, 0x0);
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v10 = (const void *)a3[1];
  if ( vtable != v10 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v11 = a3[1];
    while ( *(_BYTE *)(v11 + v8) )
    {
      if ( !*(_BYTE *)(v11 + v8 + 1) )
      {
        ++v8;
        break;
      }
      if ( !*(_BYTE *)(v11 + v8 + 2) )
      {
        v8 += 2;
        break;
      }
      v12 = v8 + 2 < 0x80000;
      v8 += 3;
      if ( !v12 )
      {
        v8 = 0;
        break;
      }
    }
    containingHeap = FIELD_U32(a1 + (2) * 16, 0x4);
    if ( v8 >= containingHeap )
      v8 = containingHeap - 1;
    qmemcpy(vtable, v10, v8);
    *((_BYTE *)vtable + v8) = 0;
  }
  FIELD_U32(a1 + (1) * 16, 0xC) = (int)&off_60BD4BF0;
  FIELD_U32(a1 + (6) * 16, 0x8) = (int)a4;
  FIELD_U32(a1 + (6) * 16, 0xC) = 0;
  v14 = (_DWORD *)sub_608649B0((int)v26, a4);
  v24 = 0;
  v25 = 0;
  v15 = sub_60864C50(v14, "timg/__Combined.bntx");
  if ( v15 >= 0 )
  {
    v16 = sub_60864BE8(v26, &v24, v15);
    v17 = v16 == 0;
    if ( v16 )
      v17 = v25 == 0;
    if ( !v17 )
    {
      v18 = (_DWORD *)sub_60998E80(v16);
      FIELD_U32(a1 + (6) * 16, 0xC) = (int)v18;
      if ( !*(_BYTE *)(v18[16] + 272) )
      {
        v19 = *(_DWORD **)(dword_60CCF464 + 36);
        v34 = 0;
        v33 = 0;
        v32 = 0;
        v31 = 0;
        v30 = 0;
        v29 = 0;
        v28 = 0;
        v27 = 33;
        v20 = (nn__util__BinaryBlockHeader *)v18[12];
        v21 = (char *)v20 + 16;
        BlockSize_const = nn__util__BinaryBlockHeader__GetBlockSize_const(v20);
        v29 = v21;
        v28 = BlockSize_const - 16;
        sub_60836538(v18[16], v19, &v27);
        v18[18] = v18[16];
        v18[20] = 0;
      }
    }
  }
  nullsub_93();
  return a1;
}
