/* sub_601E2CA4
 * address: 0x601E2CA4   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601E2CA4()
{
  int *result; // r0
  int v1; // r1
  int v2; // r1
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1

  result = (int *)dword_60C8B13C;
  if ( dword_60C8B13C )
  {
    v1 = FIELD_U32(dword_60C8B13C, 16);
    if ( v1 )
    {
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 4))(FIELD_U32(dword_60C8B13C, 16));
      result = (int *)dword_60C8B13C;
    }
    v2 = result[5];
    if ( v2 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(result[5]);
      result = (int *)dword_60C8B13C;
    }
    v3 = result[6];
    if ( v3 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(result[6]);
      result = (int *)dword_60C8B13C;
    }
    v4 = result[7];
    if ( v4 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(result[7]);
      result = (int *)dword_60C8B13C;
    }
    v5 = result[8];
    if ( v5 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(result[8]);
      result = (int *)dword_60C8B13C;
    }
    v6 = result[9];
    if ( v6 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(result[9]);
      result = (int *)dword_60C8B13C;
    }
    v7 = result[10];
    if ( v7 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(result[10]);
      result = (int *)dword_60C8B13C;
    }
    v8 = result[11];
    if ( v8 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(result[11]);
      result = (int *)dword_60C8B13C;
    }
    v9 = result[12];
    if ( v9 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 4))(result[12]);
      result = (int *)dword_60C8B13C;
    }
    v10 = result[1];
    if ( v10 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 4))(result[1]);
      result = (int *)dword_60C8B13C;
    }
    v11 = result[2];
    if ( v11 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 4))(result[2]);
      result = (int *)dword_60C8B13C;
    }
    v12 = result[3];
    if ( v12 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 4))(result[3]);
      result = (int *)dword_60C8B13C;
    }
    if ( result )
      (*(void (__fastcall **)(int *))(*result + 4))(result);
    dword_60C8B13C = 0;
    return &dword_60C8B13C;
  }
  return result;
}
