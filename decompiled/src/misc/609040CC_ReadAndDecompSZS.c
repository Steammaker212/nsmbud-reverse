/* ReadAndDecompSZS
 * address: 0x609040CC   size: 1352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall ReadAndDecompSZS(int a1, _DWORD *a2, int a3, int *a4, unsigned int *a5, _BYTE *a6)
{
  int CurrentHeap_const; // r7
  void *v11; // r8
  _BYTE *v12; // r0
  int v13; // r0
  _DWORD *inData; // r11
  int v15; // r0
  bool v16; // cc
  unsigned int v17; // r5
  int v18; // r0
  char v19; // r12
  unsigned int v20; // r1
  int v21; // r8
  unsigned int v22; // r0
  unsigned int v23; // r6
  unsigned int v24; // r0
  int v25; // r3
  void *outData; // r5
  int v27; // r2
  unsigned int v28; // r2
  int v29; // r10
  int v30; // r4
  int v31; // r0
  int v32; // r6
  int v33; // r0
  int v34; // r0
  bool v36; // zf
  unsigned int v37; // [sp+4h] [bp-7Ch]
  int *v38; // [sp+8h] [bp-78h]
  unsigned int v39; // [sp+Ch] [bp-74h]
  _DWORD v40[3]; // [sp+10h] [bp-70h] BYREF
  __int16 v41; // [sp+1Ch] [bp-64h]
  char v42; // [sp+1Eh] [bp-62h]
  int v43; // [sp+20h] [bp-60h]
  __int16 v44; // [sp+24h] [bp-5Ch]
  char v45; // [sp+26h] [bp-5Ah]
  unsigned int v46; // [sp+28h] [bp-58h] BYREF
  _DWORD v47[21]; // [sp+2Ch] [bp-54h] BYREF

  CurrentHeap_const = a2[3];
  if ( !CurrentHeap_const )
    CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  v11 = 0;
  if ( (a2[8] & 0x1F) == 0 )
  {
    memset(&v47[1], 0, 44);
    v47[0] = &off_60BF9CF0;
    v12 = (_BYTE *)a2[10];
    if ( v12 )
      v13 = sub_608E6578(v12, v47, (int)a2, 0, a2[11]);
    else
      v13 = sub_608E86B8(dword_60CCEBD0, v47, (int)a2, 0, a2[11]);
    v11 = 0;
    if ( !v13 )
      goto LABEL_74;
    inData = *(_DWORD **)(a1 + 80);
    if ( !inData )
    {
      inData = (_DWORD *)sub_608DE334(FIELD_U32(a1, 76), CurrentHeap_const, -32);
      if ( !inData )
        goto LABEL_74;
    }
    v11 = 0;
    v46 = 0;
    v15 = sub_608E7C10((int)v47, &v46, (int)inData, FIELD_U32(a1, 76));
    v16 = v15 != 0;
    if ( v15 )
      v16 = v46 > 0xF;
    if ( !v16 )
    {
      if ( FIELD_U32(a1, 80) )
        goto LABEL_74;
LABEL_14:
      operator_delete_8DE3FC(inData);
      goto LABEL_74;
    }
    v38 = a4;
    v17 = off_60C5CB10(inData[1]);
    v18 = off_60C5CB10(inData[2]);
    v20 = a2[7];
    v21 = v18;
    v22 = a2[8];
    v23 = v20;
    if ( !v20 )
      v23 = v17;
    if ( v17 <= v20 )
      v23 = v17;
    if ( v22 )
      v24 = (v22 + v23 - 1) / v22 * v22;
    else
      v24 = (v23 + 31) & 0xFFFFFFE0;
    v39 = v24;
    v25 = 0;
    outData = (void *)a2[6];
    if ( !outData )
    {
      if ( ((unsigned int)&dword_60C9BB2C & ~(1620066980 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB2C) )
      {
        dword_60C9BB28 = (int)&off_60BF9F4C;
        _cxa_guard_release(&dword_60C9BB2C);
      }
      if ( a3 && (**(int (__fastcall ***)(int, int *))a3)(a3, &dword_60C9BB28) == 1 )
      {
        v27 = a2[5];
        if ( v27 )
        {
          if ( v27 <= 32 )
            v27 = 32;
        }
        else
        {
          if ( !v21 )
            v21 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 16))(a3);
          if ( v21 <= 32 )
            v21 = 32;
          v27 = (((int)a2[4] >> 31) | 1) * v21;
        }
      }
      else
      {
        v27 = -32 * (((int)a2[4] >> 31) | 1);
      }
      outData = (void *)sub_608DE334(v39, CurrentHeap_const, v27);
      if ( !outData )
      {
LABEL_41:
        v11 = 0;
        if ( FIELD_U32(a1, 80) )
          goto LABEL_74;
        goto LABEL_14;
      }
      v25 = 1;
    }
    v28 = v46;
    if ( v46 >= FIELD_U32(a1, 76) )
    {
      LOBYTE(v29) = v25;
      v40[0] = outData;
      v37 = v23;
      v40[1] = 0;
      v45 = 16;
      v43 = 0;
      v44 = 0;
      v42 = 0;
      v41 = 0;
      v40[2] = v23;
      if ( v25 )
      {
        for ( ; v46; v28 = v46 )
        {
          v31 = ReadAndDecompSZS_helper((int)v40, (unsigned __int8 *)inData, v28);
          if ( v31 )
          {
            if ( v31 < 0 || (v32 = 0, !sub_608E7C10((int)v47, &v46, (int)inData, FIELD_U32(a1, 76))) )
            {
              operator_delete_8DE3FC(outData);
              v32 = 1;
              if ( !FIELD_U32(a1, 80) )
                goto LABEL_49;
            }
          }
          else
          {
            v32 = 3;
          }
          v33 = v32;
          if ( (v32 & 3) != 0 )
            goto LABEL_64;
        }
        goto LABEL_65;
      }
      if ( !v46 )
        goto LABEL_65;
      while ( 1 )
      {
        v34 = ReadAndDecompSZS_helper((int)v40, (unsigned __int8 *)inData, v28);
        if ( v34 )
        {
          if ( v34 < 0 || (v32 = 0, !sub_608E7C10((int)v47, &v46, (int)inData, FIELD_U32(a1, 76))) )
          {
            v32 = 1;
            if ( !FIELD_U32(a1, 80) )
            {
LABEL_49:
              operator_delete_8DE3FC(inData);
              v33 = 1;
LABEL_64:
              if ( v33 == 3 )
              {
LABEL_65:
                v23 = v37;
                goto LABEL_66;
              }
              v36 = v32 == 0;
              v23 = v37;
              v11 = 0;
              if ( !v36 )
              {
LABEL_74:
                v47[0] = &off_60BF9CF0;
                if ( v47[2] )
                  sub_608E6738((_BYTE *)v47[2], (int)v47);
                return v11;
              }
LABEL_66:
              if ( !FIELD_U32(a1, 80) )
                operator_delete_8DE3FC(inData);
              v11 = outData;
              if ( v38 )
                *v38 = v23;
              if ( a5 )
                *a5 = v39;
              if ( a6 )
                *a6 = v29;
              goto LABEL_74;
            }
          }
        }
        else
        {
          v32 = 3;
        }
        v33 = v32;
        if ( (v32 & 3) != 0 )
          goto LABEL_64;
        v28 = v46;
        if ( !v46 )
          goto LABEL_65;
      }
    }
    v29 = v25;
    if ( off_60C5CB10(*inData) == 0x59617A30 )  // Yaz0
    {
      v30 = off_60C5CB10(inData[1]);
      if ( v30 <= v39 )
      {
        decompressYaz0((char *)outData, (const char *)inData);
        if ( v30 >= 0 )
          goto LABEL_66;
      }
    }
    if ( v29 == 1 )
      operator_delete_8DE3FC(outData);
    goto LABEL_41;
  }
  return v11;
}
