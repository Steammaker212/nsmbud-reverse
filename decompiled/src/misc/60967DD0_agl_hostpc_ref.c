/* agl_hostpc_ref
 * address: 0x60967DD0   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall agl_hostpc_ref(_DWORD *a1, _BYTE *a2, void *a3)
{
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r0
  sead_ListNode *v12; // r6
  int result; // r0
  unsigned int v14; // r2
  _DWORD v15[8]; // [sp+0h] [bp-20h] BYREF

  if ( a3 )
  {
    v6 = sub_608DE334(0x10000u, (int)a3, 4);
    if ( v6 )
    {
      v7 = 4096;
      a1[6] = 4096;
      a1[7] = v6;
    }
    else
    {
      v7 = a1[6];
      if ( !v7 )
      {
LABEL_14:
        v12 = (sead_ListNode *)operator_new_8DE25C(0x5Cu, a3, 4);
        hostio_ref((int)v12);
        a1[5] = v12;
        v15[0] = &sead__SafeStringBase__vtable;
        v15[1] = "agl_hostpc";
        sub_608E83B4((sead_ListNode *)dword_60CCEBD0, v12, v15);
        goto LABEL_15;
      }
      v6 = a1[7];
    }
    if ( (v7 & 3) != 0 )
    {
      v8 = v6;
      v9 = 0;
      do
      {
        ++v9;
        FIELD_U8(v8, 12) = 0;
        *(_DWORD *)v8 = 0;
        FIELD_U32(v8, 4) = 0;
        FIELD_U32(v8, 8) = 0;
        v8 += 16;
      }
      while ( (v7 & 3) != v9 );
    }
    else
    {
      v9 = 0;
    }
    if ( (unsigned int)(v7 - 1) >= 3 )
    {
      v10 = v7 - v9;
      v11 = v6 + 16 * v9 + 48;
      do
      {
        *(_BYTE *)(v11 - 36) = 0;
        *(_DWORD *)(v11 - 40) = 0;
        *(_DWORD *)(v11 - 44) = 0;
        *(_DWORD *)(v11 - 48) = 0;
        *(_BYTE *)(v11 - 20) = 0;
        *(_DWORD *)(v11 - 24) = 0;
        *(_DWORD *)(v11 - 28) = 0;
        *(_DWORD *)(v11 - 32) = 0;
        *(_BYTE *)(v11 - 4) = 0;
        *(_DWORD *)(v11 - 8) = 0;
        *(_DWORD *)(v11 - 12) = 0;
        *(_DWORD *)(v11 - 16) = 0;
        FIELD_U8(v11, 12) = 0;
        *(_DWORD *)v11 = 0;
        FIELD_U32(v11, 4) = 0;
        FIELD_U32(v11, 8) = 0;
        v11 += 64;
        v10 -= 4;
      }
      while ( v10 );
    }
    goto LABEL_14;
  }
LABEL_15:
  result = (unsigned __int8)*a2;
  v14 = a1[17] & 0xFFFFFFFE;
  if ( *a2 )
    v14 = a1[17] | 1;
  a1[17] = v14;
  return result;
}
