/* sub_60820F8C
 * address: 0x60820F8C   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60820F8C(int a1, _DWORD *a2, void *a3)
{
  signed int result; // r0
  int v7; // r5
  int v8; // r6
  bool v9; // cc
  int v10; // r12
  int v11; // r9
  signed int v12; // r5
  void *v13; // r10
  int v14; // r8
  int (__fastcall ***v15)(_DWORD, int *); // r0
  sead_IDisposer *v16; // r0
  int v17; // r4
  sead_IDisposer *v18; // r0
  int v19; // [sp+4h] [bp-B4h]
  int v20; // [sp+8h] [bp-B0h] BYREF
  int v21; // [sp+Ch] [bp-ACh]
  int v22; // [sp+10h] [bp-A8h]

  if ( dword_60CC6C20 )
  {
    result = 1;
    if ( FIELD_U32(a1, 16) )
      return result;
    if ( sub_6081AAA4(dword_60CC6C20) == 1 )
      a3 = (void *)sub_6081AA84(dword_60CC6C20);
  }
  sub_60232ABC(&v20, &byte_60ABC94D);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v7 = v21;
    (*(void (__fastcall **)(int *))(v20 + 12))(&v20);
    v8 = 0;
    while ( 1 )
    {
      if ( !*(_BYTE *)(v21 + v8) )
      {
        v10 = v7;
        goto LABEL_15;
      }
      if ( !*(_BYTE *)(v21 + v8 + 1) )
      {
        v10 = v7;
        ++v8;
        goto LABEL_15;
      }
      if ( !*(_BYTE *)(v21 + v8 + 2) )
        break;
      v9 = v8 + 2 <= 0x7FFFF;
      v8 += 3;
      if ( !v9 )
      {
        v10 = v7;
        v8 = 0;
        goto LABEL_15;
      }
    }
    v10 = v7;
    v8 += 2;
LABEL_15:
    v11 = 0;
    v12 = 0;
    if ( v8 > 0 )
      v11 = v8;
    while ( aRdash_0[v12] )
    {
      if ( v12 > 0x7FFFF )
      {
        v12 = 0;
        break;
      }
      if ( !aRdash_0[v12 + 1] )
      {
        ++v12;
        break;
      }
      v12 += 2;
    }
    if ( v12 >= v22 - v11 )
      v12 = v22 - v11 - 1;
    if ( v12 >= 1 )
    {
      v19 = a1;
      v13 = a3;
      v14 = v10;
      qmemcpy((void *)(v10 + v11), "rdash://", v12);
      if ( v12 + v11 > v8 )
        *(_BYTE *)(v14 + v12 + v11) = 0;
      a3 = v13;
      a1 = v19;
    }
  }
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  sub_608FDE40((int)&v20, "Course/%s.sarc", (const char *)a2[1]);
  v15 = sub_608211F8((int)&v20, (int)a3);
  FIELD_U32(a1, 16) = v15;
  if ( !v15 )
    return 0;
  v16 = (sead_IDisposer *)operator_new_8DE25C(0x14u, a3, 4);
  v17 = FIELD_U32(a1, 16);
  v18 = sead_IDisposer_ctor(v16);
  FIELD_U32(v18, 0x0) = (int)off_60C2A5D0;
  v18[1].vtable = v17;
  return 1;
}
