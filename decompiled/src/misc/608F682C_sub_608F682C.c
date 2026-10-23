/* sub_608F682C
 * address: 0x608F682C   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F682C(int a1, unsigned int a2, int a3)
{
  unsigned int v4; // r5
  int v6; // r7
  unsigned int v7; // r0
  bool v8; // zf
  int v9; // r11
  unsigned int v10; // r9
  int v11; // r8
  unsigned int v12; // r9
  int v13; // r10
  int v14; // r0
  bool v15; // zf
  int v17; // [sp+0h] [bp-38h] BYREF
  unsigned int v18; // [sp+4h] [bp-34h]
  int v19; // [sp+8h] [bp-30h]
  unsigned int v20; // [sp+Ch] [bp-2Ch]
  int v21; // [sp+10h] [bp-28h]

  v4 = a2;
  if ( a2 <= 4 )
    a2 = 4;
  v6 = sead__HeapMgr__sInstance;
  v7 = FIELD_U32(a1, 32);
  if ( a2 >= v7 || (v7 = abs32(a3), ((v7 - 1) & v7) != 0) )
  {
    v8 = sead__HeapMgr__sInstance == 0;
    v9 = 0;
    if ( sead__HeapMgr__sInstance )
    {
      v7 = FIELD_U32(sead__HeapMgr__sInstance, 8);
      v8 = v7 == 0;
    }
    if ( !v8 )
    {
      v17 = a1;
      v18 = v4;
      v19 = a3;
      v20 = a2;
      v21 = a3;
      (**(void (__fastcall ***)(unsigned int, int *))v7)(v7, &v17);
    }
    return v9;
  }
  v10 = a2 + 3;
  v11 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v11 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  v12 = v10 & 0xFFFFFFFC;
  v13 = FIELD_U32(a1, 80) * a3;
  if ( v13 < 0 )
  {
    if ( v13 < -4 )
      v14 = sub_608F6E48(a1, v12, -v13);
    else
      v14 = sub_608F6D68(a1, v12);
    v13 = -v13;
    if ( v14 )
      goto LABEL_21;
  }
  else
  {
    if ( v13 <= 4 )
    {
      v14 = sub_608F69BC(a1, v12);
      if ( !v14 )
        goto LABEL_23;
LABEL_21:
      FIELD_U16(v14, 8) = FIELD_U16(a1, 122);
      v9 = v14 + FIELD_U16(v14, 10) + 16;
      if ( !v11 )
        return v9;
      goto LABEL_28;
    }
    v14 = sub_608F6BCC(a1, v12, FIELD_U32(a1, 80) * a3);
    if ( v14 )
      goto LABEL_21;
  }
LABEL_23:
  v15 = v6 == 0;
  v9 = 0;
  if ( v6 )
  {
    v14 = FIELD_U32(v6, 8);
    v15 = v14 == 0;
  }
  if ( !v15 )
  {
    v17 = a1;
    v18 = v4;
    v19 = a3;
    v20 = v12;
    v21 = v13;
    (**(void (__fastcall ***)(int, int *))v14)(v14, &v17);
  }
  if ( v11 )
LABEL_28:
    sead__CriticalSection__unlock(v11);
  return v9;
}
