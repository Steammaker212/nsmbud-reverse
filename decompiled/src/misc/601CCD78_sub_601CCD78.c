/* sub_601CCD78
 * address: 0x601CCD78   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CCD78(_DWORD *a1)
{
  _DWORD *v2; // r6
  char v3; // r12
  _DWORD *v4; // r5
  unsigned int v5; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r0
  _DWORD *v10; // r0
  int v11; // r7
  int v12; // r0
  bool v13; // zf
  int v14; // r0
  bool v15; // zf

  v2 = (_DWORD *)sub_6019172C(dword_60C8996C);
  if ( ((unsigned int)&dword_60C88AA8 & ~(1612500388 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA8) )
  {
    dword_60C88AA4 = (int)&off_60BD4BA4;
    _cxa_guard_release(&dword_60C88AA8);
  }
  if ( v2 )
  {
    v4 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))*v2)(v2, &dword_60C88AA4);
    if ( v4 )
      v4 = v2;
  }
  else
  {
    v4 = 0;
  }
  v5 = a1[258];
  if ( v5 > 6 )
    goto LABEL_26;
  if ( ((1 << v5) & 0x4D) != 0 )
  {
    a1[260] = v4[62];
    goto LABEL_12;
  }
  if ( v5 == 1 )
  {
    if ( (*(int (__fastcall **)(_DWORD *))(*v4 + 92))(v4) )
    {
      v10 = a1 + 258;
      if ( a1[264] != -1 )
      {
        v10 = a1 + 258;
        if ( a1[265] != -1 )
        {
          v10 = a1 + 258;
          if ( a1[266] != -1 )
            v10 = a1 + 264;
        }
      }
      v11 = sub_601DFFE4(v10);
      if ( v11 == (*(int (__fastcall **)(_DWORD *))(*v4 + 92))(v4) )
      {
        if ( a1[264] != -1 )
        {
          v12 = a1[265];
          v13 = v12 == -1;
          if ( v12 != -1 )
            v13 = a1[266] == -1;
          if ( !v13 )
            sub_6019EC34(a1 + 258, a1 + 264);
        }
        FIELD_U32(dword_60CC6D78, 496) = 6;
        (*(void (__fastcall **)(_DWORD *))(*v4 + 100))(v4);
      }
    }
    else
    {
      a1[260] = v4[62];
      FIELD_U32(dword_60CC6D78, 496) = 6;
    }
  }
  else
  {
LABEL_26:
    if ( a1[261] != -1 )
    {
      v14 = a1[262];
      v15 = v14 == -1;
      if ( v14 != -1 )
        v15 = a1[263] == -1;
      if ( !v15 )
        sub_6019EC34(a1 + 258, a1 + 261);
    }
  }
LABEL_12:
  v6 = a1[258];
  v7 = sub_6018691C((int)v4);
  v8 = sub_6021FF4C(v6, v7);
  return sub_601B4548((int)a1, a1[258], v8);
}
