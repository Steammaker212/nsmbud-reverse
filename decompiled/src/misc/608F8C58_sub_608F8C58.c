/* sub_608F8C58
 * address: 0x608F8C58   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608F8C58(int a1, unsigned int a2, int a3)
{
  int v6; // r0
  unsigned int v7; // r4
  unsigned int v8; // r0
  int v9; // r5
  bool v10; // zf
  unsigned int v11; // r9
  int v12; // r8
  int v13; // r1
  unsigned int v14; // r0
  bool v15; // zf
  unsigned int v16; // r3
  bool v17; // zf
  int v19; // [sp+4h] [bp-34h] BYREF
  unsigned int v20; // [sp+8h] [bp-30h]
  int v21; // [sp+Ch] [bp-2Ch]
  unsigned int v22; // [sp+10h] [bp-28h]
  int v23; // [sp+14h] [bp-24h]

  v6 = a2;
  if ( a2 <= 4 )
    v6 = 4;
  v7 = (v6 + 3) & 0xFFFFFFFC;
  v8 = abs32(a3);
  v9 = sead__HeapMgr__sInstance;
  if ( ((v8 - 1) & v8) == 0 )
  {
    v12 = 0;
    if ( (FIELD_U8(a1, 120) & 1) != 0 )
    {
      v12 = a1 + 84;
      sead__CriticalSection__lock(a1 + 84);
    }
    v13 = FIELD_U32(a1, 80) * a3;
    if ( v13 < 0 )
    {
      v16 = FIELD_U32(a1, 128);
      v14 = v16 - v7;
      if ( v16 - v7 <= v16 && (v11 = v14 & v13, v14 = FIELD_U32(a1, 124), v11 >= v14) )
      {
        FIELD_U32(a1, 128) = v11;
      }
      else
      {
        v17 = v9 == 0;
        v11 = 0;
        if ( v9 )
        {
          v14 = FIELD_U32(v9, 8);
          v17 = v14 == 0;
        }
        if ( !v17 )
        {
          v19 = a1;
          v20 = a2;
          v21 = a3;
          v22 = v7;
          v23 = -v13;
LABEL_23:
          (**(void (__fastcall ***)(unsigned int, int *))v14)(v14, &v19);
          if ( !v12 )
            return v11;
          goto LABEL_29;
        }
      }
    }
    else
    {
      v11 = (v13 + FIELD_U32(a1, 124) - 1) & -v13;
      v14 = v11 + v7;
      if ( v11 + v7 >= v11 && v14 <= FIELD_U32(a1, 128) )
      {
        FIELD_U32(a1, 124) = v14;
        if ( !v12 )
          return v11;
        goto LABEL_29;
      }
      v15 = v9 == 0;
      v11 = 0;
      if ( v9 )
      {
        v14 = FIELD_U32(v9, 8);
        v15 = v14 == 0;
      }
      if ( !v15 )
      {
        v19 = a1;
        v20 = a2;
        v21 = a3;
        v22 = v7;
        v23 = v13;
        goto LABEL_23;
      }
    }
    if ( !v12 )
      return v11;
LABEL_29:
    sead__CriticalSection__unlock(v12);
    return v11;
  }
  v10 = sead__HeapMgr__sInstance == 0;
  v11 = 0;
  if ( sead__HeapMgr__sInstance )
  {
    v8 = FIELD_U32(sead__HeapMgr__sInstance, 8);
    v10 = v8 == 0;
  }
  if ( !v10 )
  {
    v19 = a1;
    v20 = a2;
    v21 = a3;
    v22 = v7;
    v23 = a3;
    (**(void (__fastcall ***)(unsigned int, int *))v8)(v8, &v19);
  }
  return v11;
}
