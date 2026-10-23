/* sub_604660AC
 * address: 0x604660AC   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604660AC(int a1, _DWORD *a2, int a3, int a4)
{
  int v4; // r5
  int result; // r0
  int v7; // r6
  char v8; // r12
  unsigned int v9; // r11
  unsigned int v10; // r0
  int v11; // r7
  unsigned int v12; // r0
  int v13; // r1
  int v14; // r2
  _DWORD *v15; // r1
  int v16; // [sp+Ch] [bp-2Ch]

  v4 = a3;
  if ( a4 || (unsigned int)(a3 - 8) < 2 || a3 == 2 )
  {
    result = dword_60B0267C[a3];
    *a2 = result;
    goto LABEL_7;
  }
  if ( a3 == 22 )
  {
    result = 0;
    *a2 = 10;
LABEL_7:
    a2[1] = result;
    a2[2] = result;
    a2[3] = result;
    return result;
  }
  v7 = sub_6078A030(PlayerMgr_instance);
  if ( v7 <= 1 )
    v7 = 1;
  v9 = 0;
  v16 = 0;
  do
  {
    v10 = 0;
    if ( v9 < 4 )
      v10 = v9;
    v11 = *(_DWORD *)(PlayerMgr_instance + 4 * v10 + 48);
    if ( ((unsigned int)&dword_60C7B37C & ~(1615225268 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v11 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C7B378) == 1 )
      {
        v12 = FIELD_U32(v11, 1320) - 1;
        if ( v12 <= 8 )
          v16 += (0x1FBu >> v12) & 1;
      }
    }
    ++v9;
  }
  while ( (int)v9 < v7 );
  result = 0;
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  if ( !v4 )
    v4 = 4;
  if ( v16 )
  {
    if ( v16 >= 1 )
    {
      v13 = 0;
      for ( result = dword_60B0267C[v4]; (v16 & 3) != v13; a2[v13++] = result )
        ;
      if ( (unsigned int)(v16 - 1) >= 3 )
      {
        v14 = v16 - v13;
        v15 = &a2[v13 + 3];
        do
        {
          *(v15 - 3) = result;
          *(v15 - 2) = result;
          *(v15 - 1) = result;
          *v15 = result;
          v15 += 4;
          v14 -= 4;
        }
        while ( v14 );
      }
    }
  }
  else
  {
    result = dword_60B0267C[v4];
    *a2 = result;
  }
  return result;
}
