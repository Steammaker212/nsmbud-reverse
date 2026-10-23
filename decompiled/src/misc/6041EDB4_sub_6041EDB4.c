/* sub_6041EDB4
 * address: 0x6041EDB4   size: 948   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6041EDB4(_DWORD *a1)
{
  int v2; // r10
  unsigned int v3; // r8
  int v4; // r5
  _DWORD *v5; // r6
  int v6; // r0
  _DWORD *v7; // r10
  _DWORD *v8; // r0
  int v9; // r4
  int v10; // r0
  int i; // r1
  int v12; // r3
  bool v13; // cc
  int v14; // r7
  int v15; // r0
  int v16; // r1
  int *v17; // r5
  int v18; // r2
  int v19; // r3
  unsigned __int16 *v20; // r0
  unsigned int v21; // r4
  size_t v22; // r2
  int v23; // r0
  int v24; // r1
  int v25; // r0
  int v26; // r0
  _QWORD *v27; // r2
  void **v28; // r4
  int v29; // r12
  unsigned int v30; // r2
  _DWORD **v31; // r8
  _DWORD *v32; // r6
  int v33; // r3
  int v34; // r3
  int v35; // r7
  int v36; // r6
  int v37; // r4
  int v38; // r0
  int v39; // r5
  _DWORD *result; // r0
  unsigned int *v41; // [sp+4h] [bp-44h]
  void **v42; // [sp+8h] [bp-40h]
  int v43; // [sp+14h] [bp-34h]
  int v44; // [sp+18h] [bp-30h]
  int (**v45)(); // [sp+1Ch] [bp-2Ch] BYREF
  int v46; // [sp+20h] [bp-28h]

  v2 = a1[1154];
  v44 = FIELD_U16(v2, 108);
  if ( FIELD_U16(v2, 108) )
  {
    v3 = 0;
    v42 = (void **)(a1 + 1158);
    v41 = a1 + 1157;
    v43 = dword_60C9BAF4;
    while ( 1 )
    {
      v4 = v2;
      v5 = (_DWORD *)(FIELD_U32(v2, 64) + 184 * v3);
      v6 = v5[4];
      v45 = &sead__SafeStringBase__vtable;
      v46 = v6 + 2;
      v7 = *(_DWORD **)(v43 + 832);
      if ( v7 )
      {
        sead__SafeStringBase__assureTerminationImpl_const();
LABEL_9:
        ((void (__fastcall *)(int (***)()))v45[3])(&v45);
        v9 = v46;
        (*(void (__fastcall **)(_DWORD *))(v7[4] + 12))(v7 + 4);
        v10 = v7[5];
        if ( v9 != v10 )
        {
          for ( i = 0; i < 0x80000; ++i )
          {
            v12 = *(unsigned __int8 *)(v46 + i);
            v13 = v12 - *(unsigned __int8 *)(v10 + i) < 0;
            if ( v12 != *(unsigned __int8 *)(v10 + i) )
            {
              v8 = v7 + 2;
              if ( v13 )
                v8 = v7 + 1;
              v7 = (_DWORD *)*v8;
              if ( *v8 )
              {
                ((void (__fastcall *)(int (***)()))v45[3])(&v45);
                goto LABEL_9;
              }
              goto LABEL_28;
            }
            if ( !*(_BYTE *)(v46 + i) )
              break;
          }
          if ( !v7 )
            goto LABEL_28;
        }
        v14 = v5[20];
        v2 = v4;
        if ( !v14 )
          goto LABEL_37;
        v15 = FIELD_U16(v14, 12);
        v17 = (int *)(v14 + 8 + 16 * v15);
        v16 = *v17;
        if ( FIELD_U32(v14, 8) < *v17 )
        {
          do
          {
            v18 = 0;
            if ( (unsigned int)(v16 >> 3) <= 2 )
              v18 = ((unsigned __int8)aA0_0[2 - (v16 >> 3)] >> (v16 & 7)) & 1;
            v19 = *(_DWORD *)(v14 + 8 + 16 * v15);
            v15 = *(unsigned __int16 *)(v14 + 8 + 16 * v15 + 2 * v18 + 4);
            v17 = (int *)(v14 + 8 + 16 * v15);
            v16 = *v17;
          }
          while ( v19 < *v17 );
        }
        v20 = (unsigned __int16 *)v17[2];
        v21 = *v20;
        v22 = v21;
        if ( v21 >= 3 )
          v22 = 3;
        if ( v22 )
        {
          v23 = memcmp(v20 + 1, "_a0", v22);
          v24 = 1;
          if ( v23 )
            v24 = v23;
          if ( v21 <= 3 && !v23 )
          {
LABEL_30:
            v24 = 0;
            if ( v21 < 3 )
              v24 = -1;
          }
          if ( !v24 )
          {
            v25 = (int)v17 - v14 - 24;
            if ( v25 >> 4 != -1 )
            {
              v26 = v25 >> 4;
              v27 = *v42;
              if ( *v41 > v3 )
                v27 += v3;
              *(_QWORD *)(v5[36] + 8 * v26) = *v27;
            }
          }
          goto LABEL_37;
        }
        if ( v21 <= 3 )
          goto LABEL_30;
      }
      else
      {
LABEL_28:
        v2 = v4;
      }
LABEL_37:
      if ( ++v3 == v44 )
      {
        v28 = v42;
        goto LABEL_40;
      }
    }
  }
  v28 = (void **)(a1 + 1158);
LABEL_40:
  if ( *v28 )
  {
    operator_delete_8DE3FC(*v28);
    *v28 = 0;
    a1[1157] = 0;
  }
  v29 = FIELD_U16(v2, 106);
  if ( FIELD_U16(v2, 106) )
  {
    v30 = 0;
    v31 = (_DWORD **)(a1 + 1156);
    do
    {
      v32 = *v31;
      v33 = FIELD_U32(v2, 48) + 112 * v30;
      if ( a1[1155] > v30 )
        v32 += v30;
      *(_DWORD *)(FIELD_U32(v33, 32) + 16) = *v32;
      v34 = FIELD_U32(v33, 24);
      v35 = FIELD_U8(v34, 85);
      if ( FIELD_U8(v34, 85) )
      {
        v36 = 0;
        if ( (v35 & 1) != 0 )
        {
          **(_DWORD **)(v34 + 48) = FIELD_U32(v34, 40);
          v36 = 1;
        }
        if ( v35 != 1 )
        {
          v37 = 72 * v36;
          do
          {
            *(_DWORD *)(FIELD_U32(v34, 48) + 4 * v36) = FIELD_U32(v34, 40) + v37;
            v38 = FIELD_U32(v34, 40) + v37;
            v39 = FIELD_U32(v34, 48) + 4 * v36;
            v36 += 2;
            v37 += 144;
            FIELD_U32(v39, 4) = v38 + 72;
          }
          while ( v35 != v36 );
        }
      }
      ++v30;
    }
    while ( v30 != v29 );
  }
  else
  {
    v31 = (_DWORD **)(a1 + 1156);
  }
  result = *v31;
  if ( *v31 )
  {
    operator_delete_8DE3FC(result);
    *v31 = 0;
    a1[1155] = 0;
    return 0;
  }
  return result;
}
