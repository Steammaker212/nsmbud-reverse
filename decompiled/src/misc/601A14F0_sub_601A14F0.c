/* sub_601A14F0
 * address: 0x601A14F0   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A14F0(int a1, unsigned int a2, int a3, int a4, _QWORD *a5)
{
  char v5; // r12
  int v7; // r3
  _DWORD *v8; // r1
  int v9; // r0
  char *v10; // r0
  char *v11; // r1
  int v12; // r7
  char *v13; // r7
  bool v14; // zf
  int v15; // r2
  char *v16; // r3
  char *v17; // r7
  int (__fastcall ***v18)(_DWORD, int *); // r6
  int v19; // r7

  v7 = 0;
  if ( a2 >= 9 )
    a2 = 0;
  v8 = (_DWORD *)(a1 + 16 * a2);
  if ( (int)v8[6] >= 1 )
  {
    v9 = v8[5];
    if ( v9 )
      v7 = v9 - v8[7];
  }
  if ( a3 >= 1 )
  {
    v10 = (char *)(v8 + 4);
    v11 = (char *)v8[7];
    if ( (a3 & 1) == 0 )
    {
      v12 = 0;
      if ( a3 == 1 )
        goto LABEL_19;
      goto LABEL_13;
    }
    v13 = *(char **)&v11[v7 + 4];
    v7 = v13 - v11;
    v14 = v13 == v10;
    v12 = 1;
    if ( v14 )
      v7 = 0;
    if ( a3 != 1 )
    {
LABEL_13:
      v15 = a3 - v12;
      do
      {
        v16 = *(char **)&v11[v7 + 4];
        if ( v16 == v10 )
          v16 = v11;
        v17 = *((char **)v16 + 1);
        v7 = v17 - v11;
        if ( v17 == v10 )
          v7 = 0;
        v15 -= 2;
      }
      while ( v15 );
    }
  }
LABEL_19:
  v18 = **(int (__fastcall *****)(_DWORD, int *))(v7 + 4);
  if ( ((unsigned int)&dword_60C80400 & ~(1612322228 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v18 )
  {
    v19 = (**v18)(v18, &dword_60C803FC);
    if ( v19 )
      v19 = (int)v18;
  }
  else
  {
    v19 = 0;
  }
  if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v19 + 84))(v19, a4) >= 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 108))(v19);
  *a5 = 1065353216;
  a5[1] = 0;
  a5[2] = 0x3F80000000000000LL;
  a5[3] = 0;
  a5[4] = 0;
  a5[5] = 1065353216;
  return (int)(a5 + 4);
}
