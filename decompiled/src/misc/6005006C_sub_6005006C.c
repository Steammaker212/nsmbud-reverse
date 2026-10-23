/* sub_6005006C
 * address: 0x6005006C   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6005006C(_BYTE *a1)
{
  _BYTE *v2; // r5
  _DWORD *result; // r0
  int v4; // r1
  float v5; // s4
  float v6; // s0
  float v7; // s2
  float v8; // s4
  int v9; // r5
  float v10; // s6
  float v11; // s2
  float v12; // s0
  int v13; // r2

  v2 = a1 + 648;
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1116))(a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process(v2);
  result = a1 + 7224;
  v4 = *((_DWORD *)a1 + 1806);
  if ( v4 == 2 )
  {
    result = a1 + 7132;
    if ( *((float *)a1 + 31) <= *((float *)a1 + 1783) )
      return (_DWORD *)(*(int (__fastcall **)(_BYTE *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C806D8);
  }
  else if ( v4 == 1 )
  {
    *((float *)a1 + 36) = *((float *)a1 + 36) + *((float *)a1 + 1807);
    v11 = *((float *)a1 + 37) + *((float *)a1 + 1808);
    *((float *)a1 + 37) = v11;
    *((float *)a1 + 38) = *((float *)a1 + 38) + *((float *)a1 + 1809);
    v12 = *((float *)a1 + 1773);
    if ( v11 >= v12 )
    {
      *((float *)a1 + 36) = v12;
      *((float *)a1 + 37) = v12;
      *((float *)a1 + 38) = v12;
      *((_DWORD *)a1 + 25) = *((_DWORD *)a1 + 1779);
      *((_DWORD *)a1 + 33) = 0;
      *((_DWORD *)a1 + 34) = -1065353216;
      *((_DWORD *)a1 + 35) = 0;
      v13 = *((_DWORD *)a1 + 1780);
      *((_DWORD *)a1 + 30) = 0;
      *((_DWORD *)a1 + 31) = v13;
      *((_DWORD *)a1 + 32) = 0;
      *result = 2;
      return (_DWORD *)(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1176))(a1);
    }
  }
  else if ( !v4 && !*((_WORD *)a1 + 3138) )
  {
    v5 = *((float *)a1 + 1773);
    v6 = v5 - *((float *)a1 + 1787);
    v7 = v5 - *((float *)a1 + 1788);
    v8 = v5 - *((float *)a1 + 1789);
    *((float *)a1 + 1807) = v6;
    *((float *)a1 + 1808) = v7;
    *((float *)a1 + 1809) = v8;
    v9 = *((_DWORD *)a1 + 1791);
    if ( v9 >= 1 )
    {
      v10 = 1.0 / (float)v9;
      *((float *)a1 + 1807) = v10 * v6;
      *((float *)a1 + 1808) = v10 * v7;
      *((float *)a1 + 1809) = v10 * v8;
    }
    *result = 1;
  }
  return result;
}
