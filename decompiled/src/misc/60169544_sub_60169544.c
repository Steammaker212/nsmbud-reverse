/* sub_60169544
 * address: 0x60169544   size: 832   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60169544(_DWORD *a1)
{
  int v2; // r1
  int v3; // r0
  bool v4; // cc
  char *v5; // r0
  int v6; // r4
  int v7; // r1
  int *v8; // r0
  int v9; // r0
  int v10; // r1
  char *v11; // r0
  int v12; // r1
  int v13; // r5
  int *v14; // r7
  char v15; // r12
  int *v16; // r8
  int v17; // r0
  int v19; // [sp+8h] [bp-48h]
  int v20; // [sp+Ch] [bp-44h]
  int v21; // [sp+1Ch] [bp-34h]
  _DWORD v22[12]; // [sp+20h] [bp-30h] BYREF

  memset(v22, 255, 12);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v2 = 0;
  v3 = a1[1];
  while ( *(_BYTE *)(v3 + v2) )
  {
    if ( !*(_BYTE *)(v3 + v2 + 1) )
    {
      ++v2;
      break;
    }
    if ( !*(_BYTE *)(v3 + v2 + 2) )
    {
      v2 += 2;
      break;
    }
    v4 = v2 + 2 <= 0x7FFFF;
    v2 += 3;
    if ( !v4 )
    {
      v2 = 0;
      break;
    }
  }
  v5 = (char *)(v3 + 2);
  v6 = 0;
  if ( v2 < 2 )
    v5 = &byte_60B3BA34;
  v7 = (unsigned __int8)*v5 - 66;
  v8 = &dword_60AF3A98;
  switch ( v7 )
  {
    case 0:
      (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
      v9 = a1[1];
      v10 = 0;
      while ( 1 )
      {
        if ( !*(_BYTE *)(v9 + v10) )
          goto LABEL_22;
        if ( !*(_BYTE *)(v9 + v10 + 1) )
          break;
        if ( !*(_BYTE *)(v9 + v10 + 2) )
        {
          v10 += 2;
          goto LABEL_22;
        }
        v4 = v10 + 2 <= 0x7FFFF;
        v10 += 3;
        if ( !v4 )
        {
          v10 = 0;
LABEL_22:
          v11 = (char *)(v9 + 3);
          if ( v10 < 3 )
            v11 = &byte_60B3BA34;
          v12 = (unsigned __int8)*v11;
          v8 = &dword_60AF3AAC;
          if ( v12 == 48 )
            v8 = &dword_60AF3AA8;
          goto LABEL_26;
        }
      }
      ++v10;
      goto LABEL_22;
    case 1:
      v8 = &dword_60AF3A94;
      goto LABEL_26;
    case 5:
      v8 = &dword_60AF3ABC;
      goto LABEL_26;
    case 18:
LABEL_26:
      v13 = *v8;
      v22[0] = *v8;
      v21 = sub_6040D4F0(a1);
      v20 = sub_6040D864(a1);
      v19 = 0;
LABEL_28:
      v14 = (int *)sub_60008598(ActorMgr__instance, v13, FIELD_U32(ActorMgr__instance, 27172));
      v16 = *(int **)(ActorMgr__instance + 27180);
      if ( v14 == v16 )
        goto LABEL_39;
      break;
    default:
      return v6;
  }
  while ( 1 )
  {
    v6 = *v14;
    if ( ((unsigned int)&dword_60C88A98 & ~(1612093428 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A98) )
    {
      dword_60C88A94 = (int)&off_60BD4BA4;
      _cxa_guard_release(&dword_60C88A98);
    }
    if ( v6
      && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C88A94) == 1
      && FIELD_U32(v6, 240) == v21
      && FIELD_U32(v6, 252) == v20 )
    {
      return v6;
    }
    v14 = (int *)sub_60008598(ActorMgr__instance, v13, (int)(v14 + 1));
    if ( v14 == v16 )
    {
LABEL_39:
      v17 = v19 + 1;
      if ( v19 + 1 <= 2 )
      {
        ++v19;
        v13 = v22[v17];
        goto LABEL_28;
      }
      return 0;
    }
  }
}
