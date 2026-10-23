/* sub_606B4928
 * address: 0x606B4928   size: 784   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_606B4928(int a1, int a2, int a3)
{
  char v3; // r12
  unsigned __int8 v6; // r5
  int v7; // r5
  int v8; // r0
  bool v9; // zf
  int v10; // r5
  int v11; // r0
  bool v12; // zf
  int v13; // r0
  unsigned int result; // r0
  bool v15; // zf
  int v16; // r0

  v6 = 0;
  switch ( a3 )
  {
    case 1:
      if ( ((unsigned int)&dword_60C7B374 & ~(1617643908 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( !a2 || (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B370) != 1 )
        return v6;
      v7 = FIELD_U32(a2, 1216);
      v8 = sub_607C7184(a2);
      v9 = v8 == 0;
      if ( v8 )
        v9 = (v7 & 0x80000) == 0;
      if ( v9 )
      {
        v6 = 0;
        if ( (*(_BYTE *)((*(int (__fastcall **)(int))(*(_DWORD *)a2 + 80))(a2) + 2224) & 1) == 0
          || FIELD_U32(a1, 32) == 2 && (FIELD_U8(a2, 1217) & 0x30) != 0 )
        {
          goto LABEL_44;
        }
      }
      else
      {
        v6 = 0;
        if ( (*(_BYTE *)((*(int (__fastcall **)(int))(*(_DWORD *)v8 + 80))(v8) + 2224) & 1) == 0 )
          goto LABEL_44;
      }
      v6 = 8;
      if ( (FIELD_U8(a2, 6906) & 8) != 0 )
        v6 = 0;
LABEL_44:
      if ( FIELD_U32(a1, 32) != 1 || (FIELD_U8(a2, 1210) & 6) == 0 )
        return v6;
      if ( (FIELD_U8(a2, 6906) & 8) == 0 )
        return 8;
      return v6;
    case 2:
      if ( ((unsigned int)&dword_60C7B374 & ~(1617644080 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( !a2 || (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B370) != 1 )
        return v6;
      v10 = FIELD_U32(a2, 1216);
      v11 = sub_607C7184(a2);
      v12 = v11 == 0;
      if ( v11 )
        v12 = (v10 & 0x80000) == 0;
      if ( v12 )
        v13 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 80))(a2);
      else
        v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 80))(v11);
      return (unsigned __int8)(8 * (FIELD_U8(v13, 2224) & 1)) ^ 8;
    case 3:
      result = FIELD_U8(a2, 1213) & 0x20;
      if ( (FIELD_U8(a2, 1213) & 0x20) != 0 )
        return 8;
      return result;
    case 4:
      return (FIELD_U32(a2, 1212) & 0x40u) >> 3;
    case 5:
      result = FIELD_U8(a2, 1210) & 6;
      if ( (FIELD_U8(a2, 1210) & 6) != 0 )
        return 8;
      return result;
    case 6:
      v6 = FIELD_U8(a2, 1214) & 1;
      v15 = v6 == 0;
      goto LABEL_36;
    case 7:
      if ( ((unsigned int)&dword_60C7B374 & ~(1617644296 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( !a2 || (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B370) != 1 )
        return v6;
      v16 = sub_6079DF08(a2);
      v6 = v16;
      v15 = v16 == 0;
LABEL_36:
      if ( !v15 )
        return 8;
      return v6;
    case 8:
      v6 = FIELD_U8(a2, 1218) & 8;
      v15 = v6 == 0;
      goto LABEL_36;
    default:
      return v6;
  }
}
