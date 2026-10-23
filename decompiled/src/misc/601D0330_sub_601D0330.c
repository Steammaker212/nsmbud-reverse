/* sub_601D0330
 * address: 0x601D0330   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D0330(unsigned int *a1, _DWORD *a2)
{
  int (__fastcall ***v4)(_DWORD, int *); // r6
  char v5; // r12
  int v6; // r0
  _DWORD *v7; // r7
  int v8; // r5
  signed int v9; // r0
  int *v10; // r6
  int v11; // r1
  int v12; // r2
  unsigned int *v13; // r0
  int v14; // r5
  int v15; // r2
  int v16; // r5
  int v17; // r5
  int result; // r0

  v4 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[5]);
  if ( ((unsigned int)&dword_60C88AB0 & ~(1612514156 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB0) )
  {
    dword_60C88AAC = (int)&off_60BD4BBC;
    _cxa_guard_release(&dword_60C88AB0);
  }
  if ( v4 )
  {
    v6 = (**v4)(v4, &dword_60C88AAC);
    if ( v6 )
      v6 = (int)v4;
  }
  else
  {
    v6 = 0;
  }
  do
  {
    v7 = (_DWORD *)v6;
    v6 = FIELD_U32(v6, 272);
  }
  while ( v6 );
  if ( (v7[66] | 1) == 7 )
  {
    v8 = v7[69];
    v7[68] = 0;
    v7[69] = 0;
    sub_601C38C8(v7, a2 + 271);
    v10 = (int *)(a1 + 6);
    v9 = a1[6];
    if ( v9 < (int)a1[7] )
    {
      *(_DWORD *)(a1[8] + 4 * v9) = v7;
      ++a1[6];
    }
    FIELD_U32(v8, 272) = a2;
    a2[68] = 0;
    a2[69] = v8;
    sub_601C38BC((int)a2);
    v11 = -1;
    if ( *v10 < 1 )
    {
LABEL_17:
      v13 = a1 + 6;
    }
    else
    {
      v12 = 0;
      while ( *(_DWORD **)(a1[8] + 4 * v12) != a2 )
      {
        if ( ++v12 >= *v10 )
          goto LABEL_17;
      }
      v11 = v12;
      v13 = a1 + 6;
    }
  }
  else
  {
    v14 = 0;
    v7[68] = a2;
    a2[68] = 0;
    a2[69] = v7;
    sub_601C38BC((int)a2);
    v11 = -1;
    v13 = a1 + 6;
    v15 = a1[6];
    if ( v15 >= 1 )
    {
      while ( *(_DWORD **)(a1[8] + 4 * v14) != a2 )
      {
        if ( ++v14 >= v15 )
          goto LABEL_24;
      }
      v11 = v14;
    }
  }
LABEL_24:
  sub_608DEB9C(v13, v11, 1);
  v16 = dword_60CC6D78;
  FIELD_U32(v16, 528) = sub_601C38F0((int)a2);
  v17 = dword_60C99DEC;
  result = sub_601C6974((int)a2);
  if ( result == 6 )
  {
    FIELD_U32(v17, 516) = 10;
  }
  else
  {
    result = sub_601C6974((int)a2);
    if ( result == 7 )
      FIELD_U32(v17, 516) = 11;
  }
  return result;
}
