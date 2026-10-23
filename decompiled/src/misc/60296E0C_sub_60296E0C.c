/* sub_60296E0C
 * address: 0x60296E0C   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60296E0C(_DWORD *a1)
{
  char v2; // r12
  int v3; // s2
  char v4; // r12
  char *v5; // r0
  float v6; // r1
  float v7; // s6

  a1[29] = -988004352;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 748))(a1);
  a1[155] = a1 + 1693;
  a1[1697] = 3;
  a1[156] = a1 + 1702;
  a1[1709] = 1;
  if ( ((unsigned int)&algn_60C8FF03[1] & ~(1613327988 << v2) & 1) == 0
    && _cxa_guard_acquire((__guard *)&algn_60C8FF03[1]) )
  {
    byte_60C8FF00[0] = 0;
    byte_60C8FF01 = 1;
    byte_60C8FF02 = 1;
    _cxa_guard_release((__guard *)&algn_60C8FF03[1]);
  }
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 1538), (EnemyFreezeMgr_Flags *)byte_60C8FF00);
  a1[1561] = 1;
  a1[36] = 1065353216;
  a1[37] = 1065353216;
  a1[38] = 1065353216;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 736))(a1);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 744))(a1);
  a1[1679] = a1[27];
  a1[1680] = a1[28];
  a1[1681] = a1[29];
  *((_BYTE *)a1 + 6672) = 0;
  memset(a1 + 1669, 0, 36);
  *((double *)a1 + 934) = ((double (__fastcall *)(_DWORD *))*(_DWORD *)a1[1867])(a1 + 1867);
  a1[1870] = v3;
  a1[25] = 0;
  if ( (a1[5] & 1) != 0 )
  {
    if ( ((unsigned int)&algn_60C8FF03[5] & ~(1613328296 << v4) & 1) == 0
      && _cxa_guard_acquire((__guard *)&algn_60C8FF03[5]) )
    {
      dword_60C8FF10 = 0;
      dword_60C8FF14 = 1065353216;
      dword_60C8FF18 = 0;
      dword_60C8FF1C = -1082130432;
      dword_60C8FF20 = 1065353216;
      dword_60C8FF24 = 0;
      dword_60C8FF28 = -1082130432;
      dword_60C8FF2C = 0;
      _cxa_guard_release((__guard *)&algn_60C8FF03[5]);
    }
    v5 = &byte_60C8FF00[8 * a1[1667]];
    v6 = *((float *)v5 + 4);
    *((float *)a1 + 30) = v6;
    v7 = *((float *)v5 + 5);
    *((float *)a1 + 27) = *((float *)a1 + 27) + (float)(v6 * 32.0);
    *((float *)a1 + 28) = *((float *)a1 + 28) + (float)(v7 * 32.0);
    *((float *)a1 + 29) = *((float *)a1 + 29) + 0.0;
    a1[30] = 0;
    a1[31] = 0;
    a1[32] = 0;
    sub_602971C4((int)a1, 7);
    a1[1714] = 80;
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C8FD34);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C8FCC8);
  }
  (*(void (__fastcall **)(_DWORD *))(*a1 + 716))(a1);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 768))(a1);
  return 1;
}
