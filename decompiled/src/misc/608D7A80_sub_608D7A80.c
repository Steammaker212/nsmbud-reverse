/* sub_608D7A80
 * address: 0x608D7A80   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D7A80(int a1, int a2, int a3, const char *a4)
{
  int v5; // r10
  void **v8; // r5
  void **v9; // r4
  const char *v10; // r2
  int result; // r0
  int v12; // r0
  int v13; // r1
  int v14; // r1
  int v15; // r0
  unsigned int v16; // r3
  int v17; // r2
  int v18; // r0
  unsigned int v19; // r1
  unsigned int v20; // r7
  int v21; // r3
  int v22; // r2
  unsigned int v23; // r1
  unsigned int v24; // r2
  _DWORD v25[16]; // [sp+0h] [bp-40h] BYREF

  v5 = (int)a4;
  if ( !a4 )
    v5 = 1;
  v8 = off_60C5B9DC;
  if ( off_60C5B9DC == &off_60C5B9D8 )
  {
LABEL_7:
    if ( v5 == 2 )
    {
      v10 = "HardwareOpusDecoder";
    }
    else if ( v5 == 1 )
    {
      v10 = "OpusDecoder";
    }
    else
    {
      v10 = "Decoder";
    }
    nn__util__SNPrintf((nn__util *)v25, (char *)0x20, (unsigned int)v10, a4);
    FIELD_U32(a1, 9988) = 0;
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v9 = v8 - 1;
      if ( (*((int (__fastcall **)(void **))*(v8 - 1) + 4))(v8 - 1) == a3
        && (*((int (__fastcall **)(void **))*v9 + 5))(v8 - 1) == v5 )
      {
        break;
      }
      v8 = (void **)v8[1];
      if ( v8 == &off_60C5B9D8 )
        goto LABEL_7;
    }
    FIELD_U32(a1, 9988) = v9;
    v12 = FIELD_U32(a1, 9984);
    if ( v12 || (v12 = (*((int (__fastcall **)(void **))*v9 + 2))(v8 - 1), (FIELD_U32(a1, 9984) = v12) != 0) )
    {
      v13 = (*(int (__fastcall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v12 + 8))(v12, v25, FIELD_U32(a1, 24));
      result = 0;
      if ( v13 == 1 )
      {
        v14 = v25[0];
        FIELD_U32(a1, 48) = v25[0];
        *(_DWORD *)(FIELD_U32(a1, 28) + 52) = v14;
        **(_DWORD **)(a1 + 28) = 1;
        *(_DWORD *)(FIELD_U32(a1, 28) + 4) = v25[1];
        *(_BYTE *)(FIELD_U32(a1, 28) + 8) = FIELD_U8(a1, 54);
        *(_DWORD *)(FIELD_U32(a1, 28) + 12) = FIELD_U32(a1, 56);
        *(_DWORD *)(FIELD_U32(a1, 28) + 16) = FIELD_U32(a1, 60);
        *(_DWORD *)(FIELD_U32(a1, 28) + 20) = FIELD_U32(a1, 56);
        *(_DWORD *)(FIELD_U32(a1, 28) + 24) = FIELD_U32(a1, 60);
        *(_DWORD *)(FIELD_U32(a1, 28) + 36) = v25[2];
        *(_DWORD *)(FIELD_U32(a1, 28) + 40) = v25[3];
        *(_DWORD *)(FIELD_U32(a1, 28) + 44) = *(_DWORD *)(FIELD_U32(a1, 28) + 40);
        v15 = FIELD_U32(a1, 28);
        v16 = (unsigned int)(FIELD_U32(v15, 16) - 1) / FIELD_U32(v15, 36);
        FIELD_U32(a1, 724) = v16;
        v17 = FIELD_U32(v15, 36);
        if ( FIELD_U8(v15, 8) )
          v17 = FIELD_U32(v15, 16) - v17 * v16;
        FIELD_U32(v15, 48) = v17;
        if ( v14 )
          memset((void *)(a2 + 20), 0, 4 * v14);
        v18 = FIELD_U32(a1, 28);
        v19 = FIELD_U32(v18, 36);
        v20 = FIELD_U32(v18, 12);
        v21 = v20 / v19;
        v22 = v20 % v19;
        if ( FIELD_U8(v18, 8) )
        {
          if ( v22 >= 1 )
          {
            v23 = v19 - v22;
            FIELD_U32(v18, 12) = v23 + v20;
            *(_DWORD *)(FIELD_U32(a1, 28) + 48) += v23;
            v18 = FIELD_U32(a1, 28);
            v19 = FIELD_U32(v18, 36);
          }
          if ( FIELD_U32(v18, 48) < v19 )
          {
            FIELD_U32(v18, 12) += v19;
            *(_DWORD *)(FIELD_U32(a1, 28) + 48) += *(_DWORD *)(FIELD_U32(a1, 28) + 36);
            v18 = FIELD_U32(a1, 28);
            v19 = FIELD_U32(v18, 36);
          }
          v24 = FIELD_U32(v18, 12);
          v21 = v24 / v19;
          v22 = v24 % v19;
        }
        FIELD_U32(a1, 728) = v21;
        FIELD_U32(a1, 740) = v22;
        FIELD_U8(v18, 29) = 0;
        return sub_608D477C(a1 + 768, a1, FIELD_U32(a1, 28));
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
