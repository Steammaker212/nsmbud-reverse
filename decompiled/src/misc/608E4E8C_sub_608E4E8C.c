/* sub_608E4E8C
 * address: 0x608E4E8C   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E4E8C(int a1, const void **a2)
{
  int *v4; // r6
  int *v5; // r10
  int v6; // r0
  signed int v7; // r4
  bool v8; // cc
  int *v9; // r10
  int v10; // r4
  _BYTE *v11; // r0
  int v12; // r11
  signed int v13; // r6
  int (**v15)(); // [sp+8h] [bp-230h] BYREF
  int *v16; // [sp+Ch] [bp-22Ch]
  int v17; // [sp+10h] [bp-228h]
  int v18; // [sp+14h] [bp-224h] BYREF

  v16 = &v18;
  v15 = &BufferedSafeStringBase_char_vtable_probably;
  v17 = 512;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v15);
  *(_BYTE *)v16 = 0;
  v15 = &off_60BF9F58;
  v4 = v16;
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 84) + 12))(a1 + 84);
  v5 = *(int **)(a1 + 88);
  if ( v4 != v5 )
  {
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 84) + 12))(a1 + 84);
    v6 = FIELD_U32(a1, 88);
    v7 = 0;
    while ( *(_BYTE *)(v6 + v7) )
    {
      if ( !*(_BYTE *)(v6 + v7 + 1) )
      {
        ++v7;
        break;
      }
      if ( !*(_BYTE *)(v6 + v7 + 2) )
      {
        v7 += 2;
        break;
      }
      v8 = v7 + 2 <= 0x7FFFF;
      v7 += 3;
      if ( !v8 )
      {
        v7 = 0;
        break;
      }
    }
    if ( v7 >= v17 )
      v7 = v17 - 1;
    qmemcpy(v4, v5, v7);
    *((_BYTE *)v4 + v7) = 0;
  }
  v9 = v16;
  ((void (__fastcall *)(int (***)()))v15[3])(&v15);
  v10 = 0;
  while ( *((_BYTE *)v16 + v10) )
  {
    if ( !*((_BYTE *)v16 + v10 + 1) )
    {
      ++v10;
      break;
    }
    if ( !*((_BYTE *)v16 + v10 + 2) )
    {
      v10 += 2;
      break;
    }
    v8 = v10 + 2 <= 0x7FFFF;
    v10 += 3;
    if ( !v8 )
    {
      v10 = 0;
      break;
    }
  }
  (*((void (__fastcall **)(const void **))*a2 + 3))(a2);
  v11 = a2[1];
  v12 = 0;
  v13 = 0;
  if ( v10 > 0 )
    v12 = v10;
  while ( v11[v13] )
  {
    if ( !v11[v13 + 1] )
    {
      ++v13;
      break;
    }
    if ( !v11[v13 + 2] )
    {
      v13 += 2;
      break;
    }
    v8 = v13 + 2 <= 0x7FFFF;
    v13 += 3;
    if ( !v8 )
    {
      v13 = 0;
      break;
    }
  }
  if ( v13 >= v17 - v12 )
    v13 = v17 - v12 - 1;
  if ( v13 >= 1 )
  {
    (*((void (__fastcall **)(const void **))*a2 + 3))(a2);
    qmemcpy((char *)v9 + v12, a2[1], v13);
    if ( v13 + v12 > v10 )
      *((_BYTE *)v9 + v13 + v12) = 0;
  }
  return (*(int (__fastcall **)(_DWORD, int (***)()))(**(_DWORD **)(a1 + 80) + 20))(FIELD_U32(a1, 80), &v15);
}
