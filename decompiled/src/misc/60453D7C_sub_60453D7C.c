/* sub_60453D7C
 * address: 0x60453D7C   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60453D7C(int a1)
{
  char v1; // r12
  int v2; // r4
  int v3; // r10
  int v4; // r6
  int *v5; // r9
  int v6; // r8
  int v7; // r4
  int v8; // r0
  int v9; // r0
  unsigned __int8 v10; // r2
  int v13; // [sp+4h] [bp-34h]

  v2 = a1;
  if ( FIELD_U32(a1, 1316) == 2 )
  {
    FIELD_U8(a1, 1404) = *(_BYTE *)(FIELD_U32(a1, 1388) + 225);
    goto LABEL_23;
  }
  v3 = 0;
  v4 = dword_60CCF448;
  LOBYTE(v13) = 0;
  do
  {
    if ( !FIELD_U32(v4, 212) )
      goto LABEL_17;
    v5 = *(int **)(v4 + 220);
    v6 = v3;
    while ( 1 )
    {
      v7 = *v5;
      if ( ((unsigned int)&dword_60C9CF14 & ~(1615150624 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CF14) )
      {
        dword_60C9CF10 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C9CF14);
      }
      v8 = (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C9CF10);
      if ( !v7 || v8 != 1 )
        goto LABEL_13;
      if ( !v6 )
        break;
      --v6;
LABEL_13:
      if ( ++v5 == (int *)(FIELD_U32(v4, 220) + 4 * FIELD_U32(v4, 212)) )
        goto LABEL_17;
    }
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7) == 1 )
      v13 = (unsigned __int8)v13 | (1 << v3);
LABEL_17:
    ++v3;
  }
  while ( v3 != 4 );
  v9 = sub_607F6ABC(dword_60CC62E4);
  v10 = v13;
  if ( v9 )
    v10 = v13 | 0x80;
  v2 = a1;
  if ( FIELD_U8(a1, 1404) != v10 )
  {
    FIELD_U8(a1, 1404) = v10;
    if ( FIELD_U32(a1, 1388) )
      sub_604564C4();
  }
LABEL_23:
  FIELD_U8(v2, 1406) = 0;
  return 0;
}
