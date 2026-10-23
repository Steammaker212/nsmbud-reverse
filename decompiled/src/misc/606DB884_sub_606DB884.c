/* sub_606DB884
 * address: 0x606DB884   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606DB884(int a1, int a2)
{
  char v2; // r12
  _BYTE *v5; // r7
  _BYTE *v6; // r6
  int v7; // r5
  int v8; // r0
  int (__fastcall ***v9)(_DWORD, int *); // r4
  int v10; // r6
  bool v11; // zf
  int v12; // r0
  int v13; // r4

  v5 = *(_BYTE **)(a2 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1617803428 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v5 )
  {
    v6 = (_BYTE *)(**(int (__fastcall ***)(_BYTE *, int *))v5)(v5, &StageActor_RTTI);
    if ( v6 )
      v6 = v5;
  }
  else
  {
    v6 = 0;
  }
  if ( (unsigned __int8)(v6[533] - 1) > 1u )
  {
    v8 = FIELD_U32(a2, 140);
    if ( v8 == 2 )
    {
      SE_OBJ_PNGN_ICEBALL_DISAPP_ref((int)v6);
    }
    else if ( v8 == 1 )
    {
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v6 + 240))(v6);
      sub_601362A0((int)v6);
    }
  }
  else
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1617803576 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v6 )
    {
      v7 = (**(int (__fastcall ***)(_BYTE *, int *))v6)(v6, &dword_60C7B378);
      if ( v7 )
        v7 = (int)v6;
    }
    else
    {
      v7 = 0;
    }
    v9 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
    if ( ((unsigned int)&dword_60C906C8 & ~(1617803756 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C906C8) )
    {
      dword_60C906C4 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C906C8);
    }
    if ( v9 )
    {
      v10 = (**v9)(v9, &dword_60C906C4);
      if ( v10 )
        v10 = (int)v9;
      v11 = v7 == 0;
      if ( v7 )
        v11 = v10 == 0;
      if ( !v11 && sub_60769B48(v7) == 1 )
      {
        v13 = v10 + 6580;
        v12 = FIELD_U32(v10, 6580);
        if ( !v12 || !sub_602A5688(v12) )
        {
          FIELD_U8(v10, 6557) = 1;
          FIELD_U8(v10, 6550) = FIELD_U8(v7, 84);
          if ( FIELD_U32(v10, 6512) == 1 )
          {
            sub_6077A268(dword_60CBFA90);
            sub_6077A270(dword_60CBFA90);
            sub_6077A348(dword_60CBFA90);
          }
          if ( *(_DWORD *)v13 )
          {
            *(_BYTE *)(*(_DWORD *)v13 + 19) = 1;
            *(_DWORD *)v13 = 0;
          }
        }
      }
    }
  }
}
