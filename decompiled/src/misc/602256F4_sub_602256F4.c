/* sub_602256F4
 * address: 0x602256F4   size: 1168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602256F4(int a1, const char **a2, int a3)
{
  char v6; // r12
  char v7; // r9
  int v8; // r0
  int *v9; // r8
  int *v10; // r11
  int v11; // r4
  int v12; // r0
  char *v13; // r1
  int *v14; // r8
  int v15; // r4
  bool v16; // cc
  signed int v17; // r9
  int v18; // r0
  int v19; // r4
  int v20; // r0
  char *v21; // r1
  int *v22; // r8
  int v23; // r4
  signed int v24; // r9
  int v25; // r0
  int v27; // [sp+18h] [bp-50h] BYREF
  const void *v28; // [sp+1Ch] [bp-4Ch]
  int (**v29)(); // [sp+28h] [bp-40h] BYREF
  int *v30; // [sp+2Ch] [bp-3Ch]
  int v31; // [sp+30h] [bp-38h]
  int v32; // [sp+34h] [bp-34h] BYREF

  v30 = &v32;
  v29 = &BufferedSafeStringBase_char_vtable_probably;
  v31 = 14;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v29);
  *(_BYTE *)v30 = 0;
  v29 = &off_60BD9308;
  v7 = 0;
  if ( sub_60225174(a1, (int)&v29, a2) == 1 )
  {
    v8 = FIELD_U32(a1, 28);
    if ( v8 )
    {
      v7 = 0;
      v9 = *(int **)(a1 + 36);
      v10 = &v9[v8];
      if ( a3 )
      {
        do
        {
          while ( 1 )
          {
            v11 = *v9;
            if ( ((unsigned int)&dword_60C8968C & ~(1612863488 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C8968C) )
            {
              dword_60C89688 = (int)&off_60BD5510;
              _cxa_guard_release(&dword_60C8968C);
            }
            v12 = (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C89688);
            if ( v11 )
            {
              if ( v12 == 1 && (*(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v11 + 52))(v11, &v29) == 1 )
                break;
            }
            if ( v10 == ++v9 )
              return v7 & 1;
          }
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 48))(v11);
          v13 = &byte_60B3BA34;
          if ( v31 > 11 )
            v13 = (char *)v30 + 11;
          sub_60225BD0(&v27, "%c", (unsigned __int8)*v13 + 1);
          v14 = v30;
          ((void (__fastcall *)(int (***)()))v29[3])(&v29);
          v15 = 0;
          while ( *((_BYTE *)v30 + v15) )
          {
            if ( !*((_BYTE *)v30 + v15 + 1) )
            {
              ++v15;
              break;
            }
            if ( !*((_BYTE *)v30 + v15 + 2) )
            {
              v15 += 2;
              break;
            }
            v16 = v15 + 2 <= 0x7FFFF;
            v15 += 3;
            if ( !v16 )
            {
              v15 = 0;
              break;
            }
          }
          v17 = v31 - 12;
          if ( v31 - 11 > 1 )
            v17 = 1;
          if ( v17 >= 1 )
          {
            (*(void (__fastcall **)(int *))(v27 + 12))(&v27);
            qmemcpy((char *)v14 + 11, v28, v17);
            if ( v17 + 11 > v15 )
              *((_BYTE *)v14 + v17 + 11) = 0;
          }
          v7 = 1;
          v18 = FIELD_U32(a1, 28);
          v9 = *(int **)(a1 + 36);
          v10 = &v9[v18];
        }
        while ( v18 );
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v19 = *v9;
            if ( ((unsigned int)&dword_60C8968C & ~(1612863984 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C8968C) )
            {
              dword_60C89688 = (int)&off_60BD5510;
              _cxa_guard_release(&dword_60C8968C);
            }
            v20 = (**(int (__fastcall ***)(int, int *))v19)(v19, &dword_60C89688);
            if ( v19 )
            {
              if ( v20 == 1 && (*(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v19 + 52))(v19, &v29) )
                break;
            }
            if ( v10 == ++v9 )
              return v7 & 1;
          }
          (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 44))(v19);
          v21 = &byte_60B3BA34;
          if ( v31 > 11 )
            v21 = (char *)v30 + 11;
          sub_60225BD0(&v27, "%c", (unsigned __int8)*v21 + 1);
          v22 = v30;
          ((void (__fastcall *)(int (***)()))v29[3])(&v29);
          v23 = 0;
          while ( *((_BYTE *)v30 + v23) )
          {
            if ( !*((_BYTE *)v30 + v23 + 1) )
            {
              ++v23;
              break;
            }
            if ( !*((_BYTE *)v30 + v23 + 2) )
            {
              v23 += 2;
              break;
            }
            v16 = v23 + 2 <= 0x7FFFF;
            v23 += 3;
            if ( !v16 )
            {
              v23 = 0;
              break;
            }
          }
          v24 = v31 - 12;
          if ( v31 - 11 > 1 )
            v24 = 1;
          if ( v24 >= 1 )
          {
            (*(void (__fastcall **)(int *))(v27 + 12))(&v27);
            qmemcpy((char *)v22 + 11, v28, v24);
            if ( v24 + 11 > v23 )
              *((_BYTE *)v22 + v24 + 11) = 0;
          }
          v7 = 1;
          v25 = FIELD_U32(a1, 28);
          v9 = *(int **)(a1 + 36);
          v10 = &v9[v25];
        }
        while ( v25 );
      }
    }
  }
  return v7 & 1;
}
