/* sub_606C5B88
 * address: 0x606C5B88   size: 776   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C5B88(int *a1, int a2, int a3, _DWORD *a4)
{
  char v4; // r12
  int v5; // r6
  int v9; // r0
  unsigned int v10; // r0
  bool v11; // cc
  int v12; // r1
  int *v13; // r3
  int v14; // t1
  int v15; // r0
  unsigned int v16; // r0
  bool v17; // cc
  int v18; // r0
  int *v19; // r2
  int v20; // t1
  int v21; // r0
  int v22; // r0
  int *v23; // r2
  int v24; // t1
  int *v25; // r2
  int v26; // t1
  int *v27; // r2
  int v28; // t1

  v5 = a2;
  if ( !a2 )
    return a3;
  if ( a4 )
  {
    while ( 1 )
    {
      v9 = FIELD_U8(v5, 533);
      if ( v9 != 1 )
        break;
      v10 = FIELD_S8(v5, 84);
      v11 = v10 > 3;
      if ( v10 <= 3 )
        v11 = (unsigned int)a3 > 0xF;
      if ( v11 )
        return a3;
      v12 = FIELD_U32(v5, 8);
      if ( !v12 )
        return a3;
      if ( a3 >= 1 )
      {
        v13 = a1;
        do
        {
          v14 = *v13++;
          if ( v12 == v14 )
            return a3;
        }
        while ( v13 < &a1[a3] );
      }
      a1[a3] = v12;
      *a4 |= 1 << v10;
      if ( ((unsigned int)&dword_60C7B374 & ~(1617714264 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      ++a3;
      v15 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B370);
      if ( v15 )
        v15 = v5;
      v5 = sub_6079D894(v15);
      if ( !v5 )
        return a3;
    }
  }
  else
  {
    while ( 1 )
    {
      v9 = FIELD_U8(v5, 533);
      if ( v9 != 1 )
        break;
      v16 = FIELD_U8(v5, 84);
      v17 = v16 > 3;
      if ( v16 <= 3 )
        v17 = (unsigned int)a3 > 0xF;
      if ( v17 )
        return a3;
      v18 = FIELD_U32(v5, 8);
      if ( !v18 )
        return a3;
      if ( a3 >= 1 )
      {
        v19 = a1;
        do
        {
          v20 = *v19++;
          if ( v18 == v20 )
            return a3;
        }
        while ( v19 < &a1[a3] );
      }
      a1[a3] = v18;
      if ( ((unsigned int)&dword_60C7B374 & ~(1617714500 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      ++a3;
      v21 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B370);
      if ( v21 )
        v21 = v5;
      v5 = sub_6079D894(v21);
      if ( !v5 )
        return a3;
    }
  }
  if ( v9 == 3 )
  {
    if ( (unsigned int)a3 > 0xF )
      return a3;
    v22 = FIELD_U32(v5, 8);
    if ( !v22 )
      return a3;
    if ( a3 >= 1 )
    {
      v23 = a1;
      do
      {
        v24 = *v23++;
        if ( v22 == v24 )
          return a3;
      }
      while ( v23 < &a1[a3] );
    }
LABEL_58:
    a1[a3++] = v22;
    return a3;
  }
  if ( (FIELD_U8(v5, 569) & 0x20) != 0 )
  {
    if ( (unsigned int)a3 > 0xF )
      return a3;
    v22 = FIELD_U32(v5, 8);
    if ( !v22 )
      return a3;
    if ( a3 < 1 )
      goto LABEL_58;
    v27 = a1;
    while ( 1 )
    {
      v28 = *v27++;
      if ( v22 == v28 )
        break;
      if ( v27 >= &a1[a3] )
        goto LABEL_58;
    }
  }
  else
  {
    if ( Actor__getProfileId((Actor *)v5) != 392 )
      return a3;
    if ( (unsigned int)a3 > 0xF )
      return a3;
    v22 = FIELD_U32(v5, 8);
    if ( !v22 )
      return a3;
    if ( a3 < 1 )
      goto LABEL_58;
    v25 = a1;
    while ( 1 )
    {
      v26 = *v25++;
      if ( v22 == v26 )
        break;
      if ( v25 >= &a1[a3] )
        goto LABEL_58;
    }
  }
  return a3;
}
