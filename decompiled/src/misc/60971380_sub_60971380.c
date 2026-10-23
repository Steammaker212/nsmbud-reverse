/* sub_60971380
 * address: 0x60971380   size: 1264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60971380(int a1)
{
  int result; // r0
  int v2; // r1

  if ( a1 > 4870 )
  {
    if ( a1 > 6403 )
    {
      if ( a1 > 7173 )
      {
        if ( a1 <= 7680 )
        {
          switch ( a1 )
          {
            case 7174:
              return 52;
            case 7425:
              return 53;
            case 7426:
              return 54;
          }
        }
        else if ( a1 > 0x2000 )
        {
          if ( a1 == 8193 )
            return 57;
          if ( a1 == 8198 )
            return 58;
        }
        else
        {
          if ( a1 == 7681 )
            return 55;
          if ( a1 == 7682 )
            return 56;
        }
      }
      else if ( a1 <= 6661 )
      {
        switch ( a1 )
        {
          case 6404:
            return 45;
          case 6405:
            return 46;
          case 6657:
            return 47;
        }
      }
      else if ( a1 > 6917 )
      {
        if ( a1 == 6918 )
          return 50;
        if ( a1 == 7169 )
          return 51;
      }
      else
      {
        if ( a1 == 6662 )
          return 48;
        if ( a1 == 6913 )
          return 49;
      }
      return 0;
    }
    if ( a1 > 5638 )
    {
      if ( a1 <= 5891 )
      {
        if ( a1 == 5639 )
          return 62;
        if ( a1 == 5891 )
          return 36;
      }
      else
      {
        switch ( a1 )
        {
          case 5892:
            return 37;
          case 5893:
            return 38;
          case 6403:
            return 44;
        }
      }
      return 0;
    }
    switch ( a1 )
    {
      case 5377:
        result = 39;
        break;
      case 5378:
        result = 41;
        break;
      case 5379:
        result = 40;
        break;
      case 5380:
        result = 42;
        break;
      case 5381:
        result = 43;
        break;
      default:
        switch ( a1 )
        {
          case 5123:
            result = 18;
            break;
          case 5124:
            result = 19;
            break;
          case 5125:
            result = 20;
            break;
          case 5126:
            return 0;
          case 5127:
            result = 60;
            break;
          default:
            if ( a1 != 4871 )
              return 0;
            result = 61;
            break;
        }
        break;
    }
  }
  else
  {
    if ( a1 <= 2816 )
    {
      if ( a1 > 1792 )
      {
        switch ( a1 )
        {
          case 2561:
            result = 5;
            break;
          case 2562:
            result = 7;
            break;
          case 2563:
            result = 6;
            break;
          case 2564:
            result = 8;
            break;
          case 2565:
            result = 9;
            break;
          case 2566:
            return 0;
          case 2567:
            result = 59;
            break;
          default:
            switch ( a1 )
            {
              case 2305:
                result = 10;
                break;
              case 2306:
                result = 12;
                break;
              case 2307:
                result = 11;
                break;
              case 2308:
                result = 13;
                break;
              default:
                if ( a1 != 1793 )
                  return 0;
                result = 14;
                break;
            }
            break;
        }
        return result;
      }
      if ( a1 <= 768 )
      {
        v2 = a1 - 513;
        result = 1;
        switch ( v2 )
        {
          case 0:
            return result;
          case 1:
            result = 3;
            break;
          case 2:
            result = 2;
            break;
          case 3:
            result = 4;
            break;
          default:
            return 0;
        }
        return result;
      }
      switch ( a1 )
      {
        case 769:
          return 16;
        case 1281:
          return 17;
        case 1537:
          return 15;
      }
      return 0;
    }
    if ( a1 <= 3586 )
    {
      switch ( a1 )
      {
        case 2817:
          result = 29;
          break;
        case 2818:
          result = 31;
          break;
        case 2819:
          result = 30;
          break;
        case 2820:
          result = 32;
          break;
        case 2821:
          return 0;
        case 2822:
          result = 33;
          break;
        default:
          if ( a1 != 3585 )
            return 0;
          result = 34;
          break;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 4609:
          result = 21;
          break;
        case 4610:
          result = 23;
          break;
        case 4611:
          result = 22;
          break;
        case 4612:
          result = 24;
          break;
        case 4613:
          result = 25;
          break;
        default:
          if ( a1 == 3587 )
          {
            result = 35;
          }
          else
          {
            if ( a1 != 3845 )
              return 0;
            result = 26;
          }
          break;
      }
    }
  }
  return result;
}
