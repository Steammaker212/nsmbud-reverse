/* sub_607BAFF4
 * address: 0x607BAFF4   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BAFF4(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  _DWORD *v5; // r5
  _DWORD *v6; // r6
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r1
  int result; // r0
  _DWORD *v15; // r4
  int v16; // t1

  v4 = a1[3758];
  v2 = a1 + 3758;
  v3 = v4;
  v5 = v2 - 918;
  v6 = v2 - 1;
  if ( v4 )
  {
    v7 = v3 - 1;
    *v2 = v7;
    if ( !v7 )
    {
      *v6 = 4;
      (*(void (__fastcall **)(_DWORD, int, float, float, float))(*(_DWORD *)*v5 + 88))(*v5, 215, 1.0113, 0.0, 0.0);
      (*(void (__fastcall **)(_DWORD, float))(*(_DWORD *)*v5 + 128))(*v5, 0.0);
    }
  }
  v8 = a1[3759];
  if ( v8 )
  {
    v9 = v8 - 1;
    a1[3759] = v9;
    if ( !v9 )
    {
      *v6 = 4;
      (*(void (__fastcall **)(_DWORD, int, float, float, float))(*(_DWORD *)*v5 + 88))(*v5, 215, 1.0113, 0.0, 0.0);
      (*(void (__fastcall **)(_DWORD, float))(*(_DWORD *)*v5 + 128))(*v5, 0.0);
    }
  }
  v10 = a1[3760];
  if ( v10 )
  {
    v11 = v10 - 1;
    a1[3760] = v11;
    if ( !v11 )
    {
      *v6 = 4;
      (*(void (__fastcall **)(_DWORD, int, float, float, float))(*(_DWORD *)*v5 + 88))(*v5, 215, 1.0113, 0.0, 0.0);
      (*(void (__fastcall **)(_DWORD, float))(*(_DWORD *)*v5 + 128))(*v5, 0.0);
    }
  }
  v12 = a1[3761];
  if ( v12 )
  {
    v13 = v12 - 1;
    a1[3761] = v13;
    if ( !v13 )
    {
      *v6 = 4;
      (*(void (__fastcall **)(_DWORD, int, float, float, float))(*(_DWORD *)*v5 + 88))(*v5, 215, 1.0113, 0.0, 0.0);
      (*(void (__fastcall **)(_DWORD, float))(*(_DWORD *)*v5 + 128))(*v5, 0.0);
    }
  }
  v16 = a1[3762];
  v15 = a1 + 3762;
  result = v16;
  if ( v16 )
  {
    *v15 = --result;
    if ( !result )
    {
      *v6 = 4;
      (*(void (__fastcall **)(_DWORD, int, float, float, float))(*(_DWORD *)*v5 + 88))(*v5, 215, 1.0113, 0.0, 0.0);
      return (*(int (__fastcall **)(_DWORD, float))(*(_DWORD *)*v5 + 128))(*v5, 0.0);
    }
  }
  return result;
}
