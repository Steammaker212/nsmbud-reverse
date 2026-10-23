/* sub_608AF040
 * address: 0x608AF040   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (*__fastcall sub_608AF040(_DWORD *a1))(void)
{
  int (*result)(void); // r0
  int *v3; // r0
  int *v4; // r0
  _DWORD *v5; // r0
  int v6; // r0
  int v7; // r0
  void *v8; // r5
  int v9; // r6
  void *v10; // r5
  int v11; // r6

  result = (int (*)(void))a1[50];
  if ( result == (int (*)(void))1 )
  {
    a1[55] = -1;
    v3 = (int *)a1[2];
    if ( v3 )
      sub_608AC1C0(v3);
    v4 = (int *)a1[3];
    if ( v4 )
      sub_608AC1C0(v4);
    if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 24))(a1) == 1 )
      (*(void (__fastcall **)(_DWORD *))(*a1 + 28))(a1);
    v5 = (_DWORD *)a1[4];
    if ( v5 )
      sub_608ACDF0(v5, a1);
    v6 = a1[6];
    if ( v6 )
      sub_608B0870(v6, a1);
    v7 = a1[10];
    if ( v7 )
    {
      (*(void (__fastcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)v7 + 12))(v7, a1[11], a1);
      a1[11] = 0;
    }
    if ( *((_BYTE *)a1 + 185) )
    {
      v8 = sub_608C3B10();
      v9 = sub_608C2698(v8, 24, 1);
      FIELD_U32(v9, 4) = 8;
      FIELD_U32(v9, 16) = (*(int (__fastcall **)(_DWORD *))(*a1 + 32))(a1);
      FIELD_U8(v9, 20) = *((_BYTE *)a1 + 187);
      sub_608C2C1C(v8);
      *((_BYTE *)a1 + 185) = 0;
    }
    *((_BYTE *)a1 + 188) = 0;
    *((_BYTE *)a1 + 204) = 2;
    v10 = sub_608C3B10();
    v11 = sub_608C2698(v10, 24, 1);
    FIELD_U32(v11, 4) = 6;
    FIELD_U32(v11, 16) = (*(int (__fastcall **)(_DWORD *))(*a1 + 32))(a1);
    sub_608C2C1C(v10);
    a1[65] = 0;
    result = (int (*)(void))a1[100];
    if ( result )
    {
      result = (int (*)(void))result();
      a1[100] = 0;
    }
    *((_BYTE *)a1 + 187) = 0;
    a1[50] = 2;
  }
  return result;
}
