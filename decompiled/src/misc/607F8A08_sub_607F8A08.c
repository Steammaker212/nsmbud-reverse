/* sub_607F8A08
 * address: 0x607F8A08   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F8A08(int a1)
{
  int v2; // r5
  char *v3; // r0
  int v4; // r1
  int v5; // r3
  unsigned int v6; // r2
  _BYTE *v7; // r4
  int v8; // r1
  char *v9; // r0
  int v10; // r4
  int v11; // r4
  char v12; // r12
  _DWORD v14[32]; // [sp+0h] [bp-118h] BYREF
  int v15[38]; // [sp+80h] [bp-98h] BYREF

  v2 = 0;
  FIELD_U32(dword_60CC6D78, 408) = 0;
  sub_603FD374(dword_60C99DEC + 16);
  sub_6040E820(LevelInfo_instance);
  sub_6081FD80(dword_60CC6D78);
  sub_6040C110(dword_60C9A230);
  FIELD_U8(dword_60CC6D8C, 17) = 0;
  sub_6040B33C(dword_60C9A1F0);
  v15[0] = 2;
  v15[1] = (int)sub_600246FC;
  v3 = (char *)sub_608EF048(v14, v15);
  v14[23] = a1;
  v4 = dword_60CCEEA4;
  if ( dword_60CCEEA4 >= 1 )
  {
    v5 = dword_60CCEEA4 & 3;
    v6 = dword_60CCEEA4 - 1;
    if ( (dword_60CCEEA4 & 3) != 0 )
    {
      v7 = v3 + 24;
      v2 = 0;
      do
      {
        ++v2;
        *v7 = 1;
        v7 += 20;
      }
      while ( v5 != v2 );
    }
    if ( v6 >= 3 )
    {
      v8 = v4 - v2;
      v9 = &v3[20 * v2 + 84];
      do
      {
        *(v9 - 60) = 1;
        *(v9 - 40) = 1;
        *(v9 - 20) = 1;
        *v9 = 1;
        v9 += 80;
        v8 -= 4;
      }
      while ( v8 );
    }
  }
  v10 = FIELD_U32(a1, 92);
  qmemcpy(v15, v14, 0x7Cu);
  v15[31] = (int)sub_603F8094;
  v11 = sub_608F01B0(v10, v15);
  if ( ((unsigned int)&dword_60C99DDC & ~(1618971488 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C99DDC) )
  {
    dword_60C99DD8 = (int)&off_60BF942C;
    _cxa_guard_release(&dword_60C99DDC);
  }
  if ( v11 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v11 + 8))(v11, &dword_60C99DD8);
  return sub_603FF584(dword_60C99E34);
}
