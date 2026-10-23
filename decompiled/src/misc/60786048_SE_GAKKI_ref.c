/* SE_GAKKI_ref
 * address: 0x60786048   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_GAKKI_ref(int *a1)
{
  char v1; // r12
  int v3; // r0
  unsigned int v4; // r1
  _DWORD *v5; // r2
  int v6; // r1
  bool v7; // zf
  int v8; // r0
  int v9; // r0
  int result; // r0
  int v11; // r0

  v3 = 0;
  v4 = a1[1];
  if ( v4 >= 4 )
    v4 = 0;
  v5 = (_DWORD *)(dword_60C9CF0C + 312 * v4);
  a1[2] = v5[72];
  v6 = v5[5];
  a1[3] = v6;
  a1[4] = v5[6];
  if ( (v6 & 0x10) != 0 )
    goto LABEL_7;
  v3 = 1;
  v7 = (v6 & 0x20) == 0;
  if ( (v6 & 0x20) == 0 )
  {
    v3 = 2;
    v7 = (v6 & 0x40) == 0;
  }
  if ( v7 )
  {
    if ( (v6 & 0x80) != 0 )
      *a1 = 3;
  }
  else
  {
LABEL_7:
    *a1 = v3;
  }
  if ( ((unsigned int)&unk_60CC4340 & ~(1618501820 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60CC4340) )
  {
    dword_60CC4348 = (int)"SE_GAKKI_U_1_ON";
    dword_60CC434C = (int)"SE_GAKKI_D_1_ON";
    dword_60CC4350 = (int)"SE_GAKKI_L_1_ON";
    dword_60CC4354 = (int)"SE_GAKKI_R_1_ON";
    _cxa_guard_release((__guard *)&unk_60CC4340);
  }
  if ( (a1[3] & 2) != 0 )
  {
    v8 = dword_60C7F53C[a1[1]];
    (*(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v8 + 36))(v8, *((_DWORD *)&unk_60CC4340 + *a1 + 2), 0);
  }
  if ( ((unsigned int)&dword_60CC4344 & ~(1618501984 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC4344) )
  {
    dword_60CC4358 = (int)"SE_GAKKI_U_2_ON";
    dword_60CC435C = (int)"SE_GAKKI_D_2_ON";
    dword_60CC4360 = (int)"SE_GAKKI_L_2_ON";
    dword_60CC4364 = (int)"SE_GAKKI_R_2_ON";
    _cxa_guard_release(&dword_60CC4344);
  }
  if ( (a1[3] & 1) != 0 )
  {
    v9 = dword_60C7F53C[a1[1]];
    (*(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v9 + 36))(v9, *((_DWORD *)&unk_60CC4340 + *a1 + 6), 0);
  }
  result = *a1;
  if ( *a1 == 3 )
  {
    result = *((unsigned __int8 *)a1 + 16);
    if ( (result & 1) != 0 )
    {
      v11 = dword_60C7F53C[a1[1]];
      return (*(int (__fastcall **)(int, const char *, _DWORD))(*(_DWORD *)v11 + 36))(v11, "SE_GAKKI_R_2_OFF", 0);
    }
  }
  return result;
}
