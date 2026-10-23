/* sub_606B72B4
 * address: 0x606B72B4   size: 812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B72B4(_DWORD *a1)
{
  unsigned __int8 *v1; // r8
  _DWORD *v3; // r6
  char v4; // r12
  int v5; // r5
  int v6; // r11
  bool v7; // zf
  int v8; // r0
  int v9; // r0
  int v10; // r10
  char v11; // r12
  int result; // r0

  v3 = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*a1 + 224))(a1);
  if ( !v3 )
  {
    v5 = 0;
    goto LABEL_34;
  }
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = *v3 == 0;
    if ( *v3 )
    {
      v1 = *(unsigned __int8 **)(*v3 + 2196);
      v7 = v1 == 0;
    }
    if ( !v7 )
    {
      v8 = v1[533];
      if ( v8 == 2 )
      {
        v10 = 0x80000000;
      }
      else
      {
        if ( v8 != 1 )
        {
LABEL_17:
          if ( !v8 )
          {
            if ( Actor__getProfileId((Actor *)v1) == 476 )
            {
              if ( ((unsigned int)&dword_60C823C4 & ~(1617654980 << v11) & 1) == 0
                && _cxa_guard_acquire(&dword_60C823C4) )
              {
                FireballBase_RTTI = (int)&off_60BC00E0;
                _cxa_guard_release(&dword_60C823C4);
              }
              if ( (**(int (__fastcall ***)(unsigned __int8 *, int *))v1)(v1, &FireballBase_RTTI) == 1 )
              {
                (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v1 + 240))(v1);
                sub_601362A0((int)v1);
              }
            }
            if ( Actor__getProfileId((Actor *)v1) == 474 )
            {
              if ( ((unsigned int)&dword_60C823D4 & ~(1617655104 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C823D4) )
              {
                dword_60C823D0 = (int)&off_60BC00E0;
                _cxa_guard_release(&dword_60C823D4);
              }
              if ( (**(int (__fastcall ***)(unsigned __int8 *, int *))v1)(v1, &dword_60C823D0) == 1 )
                SE_OBJ_PNGN_ICEBALL_DISAPP_ref((int)v1);
            }
          }
          goto LABEL_30;
        }
        v9 = (char)v1[84];
        if ( v9 == -1 )
          goto LABEL_30;
        v10 = 1 << v9;
      }
      if ( ((unsigned int)&dword_60C7B37C & ~(1617654828 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( (**(int (__fastcall ***)(unsigned __int8 *, int *))v1)(v1, &dword_60C7B378) == 1 )
        v6 |= (unsigned __int8)(v1[6900] & 2) >> 1;
      v5 |= v10;
      (*(void (__fastcall **)(_DWORD *, unsigned __int8 *))(*a1 + 248))(a1, v1);
      v8 = v1[533];
      goto LABEL_17;
    }
LABEL_30:
    v3 = (_DWORD *)v3[1];
  }
  while ( v3 );
  if ( (v6 & 1) != 0 )
    (*(void (__fastcall **)(_DWORD *))(*a1 + 236))(a1);
LABEL_34:
  result = (*(int (__fastcall **)(_DWORD *, int))(*a1 + 208))(a1, v5);
  a1[1544] = v5;
  return result;
}
