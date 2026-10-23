/* sub_608FB24C
 * address: 0x608FB24C   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608FB24C(int a1, unsigned int a2, int a3)
{
  unsigned int v6; // r0
  int v7; // r4
  int v8; // r0
  int v9; // r8
  _DWORD *v10; // r9
  bool v11; // zf
  bool v12; // zf
  int v14; // [sp+4h] [bp-34h] BYREF
  unsigned int v15; // [sp+8h] [bp-30h]
  int v16; // [sp+Ch] [bp-2Ch]
  unsigned int v17; // [sp+10h] [bp-28h]
  int v18; // [sp+14h] [bp-24h]

  v6 = (unsigned int)&sead__HeapMgr__sInstance;
  v7 = sead__HeapMgr__sInstance;
  if ( a3 < 0 || (v6 = FIELD_U32(a1, 124), v6 < a2) || (v6 &= a3 - 1) != 0 )
  {
    v11 = sead__HeapMgr__sInstance == 0;
    v10 = 0;
    if ( sead__HeapMgr__sInstance )
    {
      v6 = *(_DWORD *)(sead__HeapMgr__sInstance + 8);
      v11 = v6 == 0;
    }
    if ( !v11 )
    {
      v14 = a1;
      v15 = a2;
      v16 = a3;
      v17 = a2;
      v18 = a3;
      (**(void (__fastcall ***)(unsigned int, int *))v6)(v6, &v14);
    }
  }
  else
  {
    v8 = FIELD_U8(a1, 120);
    v9 = 0;
    if ( (v8 & 1) != 0 )
    {
      v9 = a1 + 84;
      v8 = sead__CriticalSection__lock(a1 + 84);
    }
    v10 = *(_DWORD **)(a1 + 140);
    if ( v10 )
    {
      FIELD_U32(a1, 140) = *v10;
      FIELD_U32(a1, 136) -= FIELD_U32(a1, 124);
      if ( !v9 )
        return v10;
      goto LABEL_18;
    }
    v12 = v7 == 0;
    v10 = 0;
    if ( v7 )
    {
      v8 = FIELD_U32(v7, 8);
      v12 = v8 == 0;
    }
    if ( !v12 )
    {
      v14 = a1;
      v15 = a2;
      v16 = a3;
      v17 = FIELD_U32(a1, 124);
      v18 = a3;
      (**(void (__fastcall ***)(int, int *))v8)(v8, &v14);
    }
    if ( v9 )
LABEL_18:
      sead__CriticalSection__unlock(v9);
  }
  return v10;
}
