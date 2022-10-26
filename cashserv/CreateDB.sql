CREATE DATABASE  IF NOT EXISTS `cashsrv` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `cashsrv`;
-- MySQL dump 10.13  Distrib 5.7.39, for Linux (x86_64)
--
-- Host: 127.0.0.1    Database: cashsrv
-- ------------------------------------------------------
-- Server version	5.7.39-0ubuntu0.18.04.2

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `barcod`
--

DROP TABLE IF EXISTS `barcod`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `barcod` (
  `cod_good` varchar(20) NOT NULL,
  `barcod` varchar(20) NOT NULL,
  `numdoc` varchar(20) NOT NULL,
  PRIMARY KEY (`barcod`,`numdoc`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `barcod_cur`
--

DROP TABLE IF EXISTS `barcod_cur`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `barcod_cur` (
  `cod_good` varchar(20) NOT NULL,
  `barcod` varchar(20) NOT NULL,
  `numdoc` varchar(20) NOT NULL,
  PRIMARY KEY (`barcod`,`numdoc`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `box_barcod`
--

DROP TABLE IF EXISTS `box_barcod`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `box_barcod` (
  `numdoc` varchar(20) NOT NULL,
  `barcod` varchar(20) NOT NULL,
  `quant` int(11) NOT NULL DEFAULT '0',
  `flag` tinyint(4) NOT NULL DEFAULT '0',
  `textstatus` varchar(20) NOT NULL DEFAULT '',
  PRIMARY KEY (`numdoc`,`barcod`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `box_barcod_cur_t`
--

DROP TABLE IF EXISTS `box_barcod_cur_t`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `box_barcod_cur_t` (
  `numdoc` varchar(20) NOT NULL,
  `barcod` varchar(20) NOT NULL,
  `quant` int(11) NOT NULL DEFAULT '0',
  `flag` tinyint(4) NOT NULL DEFAULT '0',
  `textstatus` varchar(20) NOT NULL DEFAULT '',
  PRIMARY KEY (`numdoc`,`barcod`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `box_cur`
--

DROP TABLE IF EXISTS `box_cur`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `box_cur` (
  `numdoc` varchar(20) NOT NULL,
  `barcod` varchar(20) NOT NULL,
  `quant` int(11) NOT NULL DEFAULT '0',
  `flag` tinyint(4) NOT NULL DEFAULT '0',
  `textstatus` varchar(20) NOT NULL DEFAULT '',
  PRIMARY KEY (`numdoc`,`barcod`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `cassir`
--

DROP TABLE IF EXISTS `cassir`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `cassir` (
  `cod_cass` decimal(10,0) NOT NULL DEFAULT '0',
  `namecass` varchar(20) NOT NULL DEFAULT '',
  `passcass` varchar(20) NOT NULL DEFAULT ''
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

/*!40000 ALTER TABLE `cassir` DISABLE KEYS */;
LOCK TABLES `cassir` WRITE;
INSERT INTO `cashsrv`.`cassir` VALUES  ('1','admin','1');
UNLOCK TABLES;
/*!40000 ALTER TABLE `cassir` ENABLE KEYS */;
--
-- Table structure for table `cassir_cur`
--

DROP TABLE IF EXISTS `cassir_cur`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `cassir_cur` (
  `cod_cass` decimal(10,0) NOT NULL DEFAULT '0',
  `namecass` varchar(20) NOT NULL DEFAULT '',
  `passcass` varchar(20) NOT NULL DEFAULT ''
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `command_status`
--

DROP TABLE IF EXISTS `command_status`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `command_status` (
  `codcommand` varchar(20) NOT NULL,
  `status` varchar(20) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `delbarcod`
--

DROP TABLE IF EXISTS `delbarcod`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `delbarcod` (
  `barcod` varchar(12) NOT NULL DEFAULT '',
  PRIMARY KEY (`barcod`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `document_h`
--

DROP TABLE IF EXISTS `document_h`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `document_h` (
  `numdoc` varchar(20) NOT NULL,
  `date` datetime NOT NULL,
  `status` tinyint(4) NOT NULL DEFAULT '0',
  `textstatus` varchar(20) NOT NULL DEFAULT '>',
  PRIMARY KEY (`numdoc`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 COMMENT='шапка документа';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `document_h_cur`
--

DROP TABLE IF EXISTS `document_h_cur`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `document_h_cur` (
  `numdoc` varchar(20) NOT NULL,
  `date` datetime NOT NULL,
  `status` tinyint(4) NOT NULL DEFAULT '0',
  `textstatus` varchar(20) NOT NULL DEFAULT 'не проверено',
  `box_cnt` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`numdoc`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 COMMENT='шапка документа';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `document_h_selected`
--

DROP TABLE IF EXISTS `document_h_selected`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `document_h_selected` (
  `numdoc` varchar(20) NOT NULL,
  `date` datetime NOT NULL,
  `status` tinyint(4) NOT NULL DEFAULT '0',
  `textstatus` varchar(20) NOT NULL DEFAULT 'не проверено',
  PRIMARY KEY (`numdoc`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 COMMENT='шапка документа';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `document_t`
--

DROP TABLE IF EXISTS `document_t`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `document_t` (
  `npp` int(11) NOT NULL,
  `numdoc` varchar(20) NOT NULL,
  `cod_good` varchar(20) NOT NULL,
  `quant` int(11) NOT NULL DEFAULT '0',
  `name` varchar(100) NOT NULL,
  `flag` tinyint(4) NOT NULL DEFAULT '0',
  `quant_fact` int(11) DEFAULT NULL,
  `textstatus` varchar(20) NOT NULL DEFAULT '>',
  `numstor` varchar(20) NOT NULL,
  `storplace` varchar(20) NOT NULL,
  `complarea` varchar(20) NOT NULL,
  `quant_breach` int(10) unsigned DEFAULT NULL,
  PRIMARY KEY (`npp`,`numdoc`,`cod_good`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `document_t_cur`
--

DROP TABLE IF EXISTS `document_t_cur`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `document_t_cur` (
  `npp` int(11) NOT NULL,
  `numdoc` varchar(20) NOT NULL,
  `cod_good` varchar(20) NOT NULL,
  `quant` int(11) NOT NULL DEFAULT '0',
  `name` varchar(100) NOT NULL,
  `flag` tinyint(4) NOT NULL DEFAULT '0',
  `quant_fact` int(11) DEFAULT NULL,
  `textstatus` varchar(20) NOT NULL DEFAULT '>',
  `numstor` varchar(20) NOT NULL,
  `storplace` varchar(20) NOT NULL,
  `complarea` varchar(20) NOT NULL,
  `quant_breach` int(11) DEFAULT NULL,
  PRIMARY KEY (`npp`,`numdoc`,`cod_good`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER  `cashsrv`.`err_status_ins` AFTER INSERT ON `document_t_cur` FOR EACH ROW BEGIN
	if NEW.quant_fact > NEW.quant then
		UPDATE box_cur SET textstatus = 'error' , flag = 4;				
		UPDATE box_barcod_cur_t SET flag = 4 , quant = quant + NEW.quant_fact
		where barcod in (select barcod from box_cur);
	end if;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER  `cashsrv`.`err_status` AFTER UPDATE ON `document_t_cur` FOR EACH ROW BEGIN
	set @cnt = 0;
	set @quant_fact = ifnull(OLD.quant_fact,0);
	
	    if NEW.quant_fact > NEW.quant then
	    	    UPDATE box_cur SET textstatus = 'error' , flag = 2;				
		    UPDATE box_barcod_cur_t SET flag = if(NEW.flag=4,4,2) 
		    where barcod in (select barcod from box_cur);
	    else 
		if NEW.quant_fact < OLD.quant_fact then					
		    select count(*) into @cnt from document_t_cur where quant_fact > quant;	
		    if @cnt = 0 then  							
			UPDATE box_cur SET textstatus = 'ok' , flag =3;
			UPDATE box_barcod_cur_t SET flag = 3  
			where  barcod in (select barcod from box_cur);
		    else
			select count(*) into @cnt from document_t_cur where quant_fact > quant and flag =4;
			if @cnt >0 then
			    UPDATE box_cur SET textstatus = 'error' , flag = 4;
			    UPDATE box_barcod_cur_t SET flag = 4 
			    where barcod in (select barcod from box_cur);
			else
			    select count(*) into @cnt from document_t_cur where quant_fact > quant and flag =2;
			    if @cnt > 0 then
				UPDATE box_cur SET textstatus = 'error' , flag = 2;
				UPDATE box_barcod_cur_t SET flag = 2 
				where barcod in (select barcod from box_cur);
			    end if;
			end if;
		    end if;
		end if;
	    end if;
	
	
	UPDATE box_barcod_cur_t SET quant = 
	case
	    when quant + (NEW.quant_fact - @quant_fact) >=0 then quant + (NEW.quant_fact - @quant_fact)  
    	    when quant + (NEW.quant_fact - @quant_fact) < 0 then quant
	end
	where  barcod in (select barcod from box_cur);
	
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;

--
-- Table structure for table `load_barcod`
--

DROP TABLE IF EXISTS `load_barcod`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `load_barcod` (
  `cod_good` varchar(20) NOT NULL,
  `barcod` varchar(20) NOT NULL,
  `numdoc` varchar(20) NOT NULL,
  PRIMARY KEY (`cod_good`,`barcod`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `load_box_barcod`
--

DROP TABLE IF EXISTS `load_box_barcod`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `load_box_barcod` (
  `numdoc` varchar(20) NOT NULL,
  `barcod` varchar(20) NOT NULL,
  PRIMARY KEY (`numdoc`,`barcod`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `load_document_t`
--

DROP TABLE IF EXISTS `load_document_t`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `load_document_t` (
  `npp` varchar(20) NOT NULL,
  `cod_good` varchar(20) NOT NULL,
  `namegood` varchar(100) NOT NULL,
  `quant` varchar(20) NOT NULL,
  `price` varchar(20) NOT NULL,
  `numstor` varchar(20) NOT NULL,
  `storplace` varchar(20) NOT NULL,
  `complarea` varchar(20) NOT NULL,
  `numdoc` varchar(20) NOT NULL,
  `datedoc` varchar(20) NOT NULL,
  `nummag` varchar(20) NOT NULL,
  PRIMARY KEY (`npp`,`cod_good`,`numdoc`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `log`
--

DROP TABLE IF EXISTS `log`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `log` (
  `datelog` date NOT NULL,
  `timelog` time NOT NULL,
  `username` varchar(20) DEFAULT NULL,
  `textlog` varchar(100) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping routines for database 'cashsrv'
--
/*!50003 DROP PROCEDURE IF EXISTS `chek_pwd` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `chek_pwd`( v_cod_cass decimal(10,0) , v_namecass varchar(20) ,v_passcass varchar(20), inout v_out varchar(20))
BEGIN
	
	declare cntrec int;				
	declare cmd_name varchar(20);	
	set cmd_name='chek_pwd';
	set cntrec=0;
	if not exists(select * from cassir) then
		INSERT INTO cassir VALUES(1,'admin','1');
	end if;
	select count(*) INTO cntrec  from cassir where  namecass=v_namecass and  passcass=v_passcass limit 1;
	if cntrec>0 then
		set v_out='ok';
		truncate table cassir_cur;
		INSERT INTO cassir_cur VALUES(1,v_namecass,v_passcass);
		insert into log values(curdate(),curtime(), v_namecass,concat('chek_pwd ', v_namecass, v_passcass));
	else
		set v_out= 'Authorisation error.';
	end if;
	
	
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_change_fact_quant` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_change_fact_quant`(numdoc_in varchar(20),barcod_in varchar(20), fact_in_quant int,modific varchar(10), modific_s varchar(10), 
																out cod_good_in varchar(20))
BEGIN
	
	declare numd varchar(20);
	declare cod_g varchar(20);
	declare maxnpp int;
	declare cntbarcod int;
	declare v_quant int;

	set cntbarcod=0;

	set barcod_in=cast(cast(barcod_in as UNSIGNED) as char);
	/*Если штрих код начинается на 99 то это короб*/
	if left(barcod_in,2) = '99' then
		if modific_s = 'bybox' then
				select barcod into cod_good_in from box_barcod_cur_t where barcod = barcod_in and flag <>6;
				call sp_create_current_doc_t_box(barcod_in,'');		/*создадим новый список для скан. из новой поставки*/
				update box_barcod_cur_t set textstatus = 'X' , flag = 3 where barcod = barcod_in and flag <> 6;
				if cod_good_in = '' or cod_good_in is null  then
					select numdoc into numdoc_in from document_h_selected limit 1;
					insert box_barcod_cur_t (numdoc, barcod, quant, flag, textstatus)
					values (numdoc_in , barcod_in, 0, 6, 'Неопознанный штрих - код');
				end if;	
		else 
			if modific_s = 'box' then
				select numdoc into numdoc_in from document_h_selected limit 1;
				select barcod into cod_good_in from box_barcod_cur_t where barcod = barcod_in and flag<>6;
				update box_barcod_cur_t set   flag = 3 where barcod = barcod_in and flag <>6;
				if cod_good_in = '' or cod_good_in is null  then
					insert box_barcod_cur_t (numdoc, barcod, quant, flag, textstatus)
					values (numdoc_in, barcod_in, 0, 6, 'Неопознанный штрих - код');
				end if;
			end if;
		end if;
		/*set cod_good_in=barcod_in;*/
	else
		if modific='plus' then
			/*поиск только по коду товара и номеру документа*/
			select t.numdoc, t.cod_good,min(ifnull(t.quant_fact,0)) as minquant  into numd,cod_g,v_quant    from document_t_cur as t 
			where (t.cod_good=barcod_in and t.numdoc=numdoc_in and t.flag<>4) group by t.cod_good; 
			UPDATE document_t_cur d SET quant_fact=ifnull(quant_fact,0)+fact_in_quant,
		 	d.flag=
				 case
					when quant>quant_fact then 1
					when quant<quant_fact then 2
					when quant=quant_fact then 3
	 			end,
			d.textstatus=
				 case
					when quant>quant_fact then '>'
					when quant<quant_fact then '<'
					when quant=quant_fact then 'OK'
	 			end
 			where d.numdoc =numd and d.cod_good=cod_g;
			set cod_good_in=cod_g;
		elseif modific='minus' then
			/*поиск только по коду товара и номеру документа*/
			select t.numdoc, t.cod_good,min(ifnull(t.quant_fact,0)) as minquant  into numd,cod_g,v_quant    from document_t_cur as t 
			where (t.cod_good=barcod_in and t.numdoc=numdoc_in  and t.flag<>4) group by t.cod_good; 
 
			UPDATE document_t_cur d SET quant_fact=case 
													when (ifnull(quant_fact,0)-fact_in_quant)<0 then 0
													else  ifnull(quant_fact,0)-fact_in_quant
												end ,
		 	d.flag=
				 case
					when quant>quant_fact then 1
					when quant<quant_fact then 2
					when quant=quant_fact then 3
	 			end,
			d.textstatus=
				 case
					when quant>quant_fact then '>'
					when quant<quant_fact then '<'
					when quant=quant_fact then 'OK'
	 			end
 			where d.numdoc =numd and d.cod_good=cod_g;
			set cod_good_in=cod_g;
		elseif modific='barcod' then
			/*поиск кода товара по штрих коду, товара должен быть с мин количестовм */
			select t.numdoc, t.cod_good  as cod_g into numd,cod_g    from document_t_cur as t
			inner join barcod_cur b on t.cod_good=b.cod_good and t.numdoc=b.numdoc 
			where (b.barcod=barcod_in) and ifnull(quant_fact,0)=(select min(ifnull(quant_fact,0)) from  document_t_cur as t
			inner join barcod_cur b on t.cod_good=b.cod_good and t.numdoc=b.numdoc 
			where b.barcod=barcod_in group by t.cod_good limit 1)
			limit 1;
			if (cod_g='' or cod_g is null)  then
				/*поиск минимального количества для неопознанного штрих-кода*/
				/*в данную часть еще можем попасть, если вводим код товара вручную*/
				select t.numdoc, t.cod_good into numd,cod_g from document_t_cur as t 
				where (t.cod_good=barcod_in) and ifnull(t.quant_fact,0)  =
				(select min(ifnull(quant_fact,0)) as minquant   from document_t_cur  where (cod_good=barcod_in) group by cod_good limit 1)  limit 1;
				/*если такого штрих кода нет то вставляем */
				if (cod_g='' or cod_g is null) and (ltrim(barcod_in)<>'') then
					select numdoc into numd from document_t_cur limit 1;/*выбираем номер док тк он после пред запроса пустой*/ 
					select max(npp)+10 into maxnpp from document_t_cur;
					insert into document_t_cur values(maxnpp,numd,barcod_in,0,'Не опознанный штрих код',4,1,'unknown','','','');
					
				else
					UPDATE document_t_cur d SET quant_fact=quant_fact+fact_in_quant  
					where cod_good=barcod_in and numdoc =numd and flag=4;
				end if;
				set cod_good_in=barcod_in;
			else/*штрих-код найден. увеличиваем количество*/
				UPDATE document_t_cur d SET quant_fact=case 
													when (ifnull(quant_fact,0)+fact_in_quant)<0 then 0
													else  ifnull(quant_fact,0)+fact_in_quant
												end ,
		 		d.flag=
					case
						when quant>quant_fact then 1
						when quant<quant_fact then 2
						when quant=quant_fact then 3
	 				end,
				d.textstatus=
				 	case
						when quant>quant_fact then '>'
						when quant<quant_fact then '<'
						when quant=quant_fact then 'OK'
	 				end
 				where d.numdoc =numd and d.cod_good=cod_g;

			set cod_good_in=cod_g;	
			end if;
			
		end if;
	end if;		
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_close_doc_h` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_close_doc_h`(numdoc_h varchar(20),inout strstatus varchar(150))
BEGIN
	
	declare cntstatus int;
	select count(*) into cntstatus from document_t where ifnull(flag,0)=0 and numdoc=numdoc_h;
	set strstatus=concat('Накладная ', numdoc_h, ' не закрыта.  Есть не проверенные позиции!');
	if (cntstatus=0) then	
		select count(*) into cntstatus from document_t where flag<>3 and numdoc=numdoc_h;
		if cntstatus =0 then 
			update document_h_cur set status=3  where numdoc=numdoc_h;
			delete from document_h_selected where numdoc=numdoc_h;
			set strstatus=concat('Накладная ', numdoc_h, ' успешно закрыта. Все позиции совпали!');
			REPLACE INTO document_h (numdoc,date,status,textstatus)
			SELECT numdoc,date,status,textstatus from document_h_cur; 
			insert into log values(curdate(),curtime(), (select namecass from cassir_cur limit 1),
			concat('sp_close_doc_h ', numdoc_h));
		else 
			update document_h_cur set status=1  where numdoc=numdoc_h;
			delete from document_h_selected where numdoc=numdoc_h;
			set strstatus=concat('Накладная ', numdoc_h, ' успешно закрыта. Не все позиции совпали!');
			REPLACE INTO document_h (numdoc,date,status,textstatus)
			SELECT numdoc,date,status,textstatus from document_h_cur; 
			insert into log values(curdate(),curtime(), (select namecass from cassir_cur limit 1),
			concat('sp_close_doc_h ', numdoc_h));
		end if;
	end if;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_close_doc_h_nochek` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_close_doc_h_nochek`(numdoc_h varchar(20),inout strstatus varchar(150))
BEGIN
			update document_h_cur set status=4  where numdoc=numdoc_h;
			delete from document_h_selected where numdoc=numdoc_h;
			set strstatus=concat('Накладная ', numdoc_h, ' успешно закрыта без проверки.');
			REPLACE INTO document_h (numdoc,date,status,textstatus)
			SELECT numdoc,date,status,textstatus from document_h_cur; 
			insert into log values(curdate(),curtime(), (select namecass from cassir_cur limit 1),
			concat('sp_close_doc_h_nochek ', numdoc_h));
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_create_current_box` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_create_current_box`()
BEGIN
	declare cnt int;
	select count(*) into cnt from box_barcod_cur_t;
	if (cnt = 0) then
			truncate table box_barcod_cur_t;
			insert into box_barcod_cur_t select * from box_barcod as b 			/*штрих кода коробок для всех выбранных поставок*/
			where numdoc in (select numdoc from document_h_selected);
	end if;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_create_current_doc_h` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_create_current_doc_h`( datebegin datetime, dateend datetime , numd  varchar(20) )
BEGIN
	declare cnt int;
	select count(*) into cnt from document_h_selected;
	if (cnt = 0) then
		truncate table document_h_cur;
		truncate table document_h_selected;
		insert  into document_h_cur(numdoc, date, status, textstatus, box_cnt) 
		select dh.numdoc, dh.date as ddate, dh.status, dh.textstatus, count(b.numdoc) as box_cnt
		from document_h as dh
		left join box_barcod as b on dh.numdoc = b.numdoc
		where date(dh.date) >=date(datebegin) and date(dh.date)<=date(dateend) and  dh.numdoc like numd
		group by dh.numdoc;
	end if; 
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_create_current_doc_t` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_create_current_doc_t`(numd  varchar(20))
BEGIN
	declare cnt int;
	select count(*) into cnt from document_t_cur;
	if (cnt = 0) then
			truncate table document_t_cur;
			insert  into document_t_cur (npp, numdoc, cod_good, quant, name, flag, quant_fact,textstatus ,numstor,storplace,complarea,quant_breach) 
			select 
			npp, numdoc, cod_good, quant, name, flag, quant_fact,textstatus ,numstor,storplace,complarea,quant_breach
			from document_t as dh 
			where numdoc in (select numdoc from document_h_selected); 
			truncate table barcod_cur;
			insert into barcod_cur select * from barcod as b 
			where numdoc in (select numdoc from document_h_selected);
	end if;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_create_current_doc_t_box` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_create_current_doc_t_box`(numbox  varchar(20), modific varchar(20))
BEGIN

	declare numd varchar(20);


		if (modific = '') then
			select numdoc into numd from box_barcod where barcod = numbox  and flag <> 6 limit 1;/*выберем поставку по коду коробки*/
			if (numd <> '' or numd is not null) then
				call sp_saveAndDelete_current_doc_t();			/*сохраним промежуточные данные сканирования*/
				truncate table document_t_cur;
				insert  into document_t_cur select *  from document_t as dh 			/*заполним табличную часть по ном. поставки*/
				where numdoc = numd; 
				truncate table barcod_cur;
				insert into barcod_cur select * from barcod as b 						/*штрих кода по ном. поставки*/
				where numdoc = numd;
				truncate table box_barcod_cur_t;
				insert into box_barcod_cur_t select * from box_barcod as b 			/*штрих кода коробок для всех выбранных поставок*/
				where numdoc in (select numdoc from document_h_selected);	
				truncate table box_cur;
				insert into box_cur (numdoc, barcod, quant, flag, textstatus) 			/*штрих код текущего короба*/
				select numdoc, barcod, quant, flag, textstatus from box_barcod where barcod = numbox 
				and numdoc in (select numdoc from document_h_selected) limit 1;

			end if;
		else
			if modific = 'init' then
				truncate table box_barcod_cur_t;
				insert into box_barcod_cur_t select * from box_barcod as b 			/*штрих кода коробок для всех выбранных поставок*/
				where numdoc in (select numdoc from document_h_selected)  and flag <> 6;	
				
			end if;
		end if;

END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_create_doc_h_selected` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_create_doc_h_selected`(numd varchar(20),cmd varchar(20), inout msg varchar(100))
BEGIN
	
	declare status_doc int;
	select status into status_doc from document_h_cur where numdoc=numd limit 1;
	if status_doc=0 then
		if cmd='insert' then
			insert into document_h_selected values (numd,current_date(),0,'');
			set msg='ok';
		elseif cmd='delete' then
			delete from document_h_selected  where numdoc=numd;
		elseif cmd='truncate' then
			truncate table document_h_selected;
		end if;
	else
		set msg='error';
	end if;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_getversion` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_getversion`(inout strstatus varchar(150))
BEGIN
	set strstatus=concat('2010-05-28');
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_get_info` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_get_info`(cmd varchar(20), out info varchar(80))
BEGIN
	declare v_quant int;
				select count(*) into v_quant from box_barcod_cur_t where flag <>6;
				set info = concat('Кол-во кор. шт, учет =' , v_quant);
				
				select count(*) into v_quant from box_barcod_cur_t where flag <>0;
				set info = concat(info, ', факт =' , v_quant);
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_load_barcod` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_load_barcod`()
BEGIN
	
	INSERT INTO barcod (cod_good, barcod, numdoc)
	select  cast(cod_good as UNSIGNED) AS COD_GOOD, barcod, numdoc 
	from load_barcod where (barcod, numdoc) not in (select barcod, numdoc from barcod);
	truncate table load_barcod;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_load_box_barcod` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_load_box_barcod`()
BEGIN
	
	INSERT INTO box_barcod ( numdoc,  barcod)
	select   numdoc, barcod 
	from load_box_barcod where (numdoc, barcod) not in (select  numdoc, barcod from box_barcod);
	truncate table load_box_barcod;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_load_doc` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_load_doc`()
BEGIN
	
	insert into document_h(numdoc,date,status,textstatus)
	select distinct numdoc, str_to_date(datedoc,'%Y%m%d%H%i') as ddate,0, nummag as textstatus   
	from load_document_t where numdoc not in (select numdoc from document_h);
	
	insert into document_t(npp,numdoc,cod_good,quant,name,flag,numstor, storplace,complarea)
	select cast(npp as UNSIGNED) as npp, numdoc, cast(cod_good as UNSIGNED) AS COD_GOOD, cast(quant as unsigned),namegood,0,
	numstor, storplace,complarea 
	from load_document_t  where (npp, cod_good,numdoc) not in(select npp, cod_good, numdoc from document_t);
	
	truncate table load_document_t;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_open_doc_h` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_open_doc_h`(numdoc_h varchar(20))
BEGIN
	update document_h_cur set status=0, textstatus='>' where numdoc=numdoc_h;
	update document_t set flag=0, textstatus='>', quant_fact=0 where numdoc=numdoc_h;
	insert into log values(curdate(),curtime(), (select namecass from cassir_cur limit 1),concat('sp_open_doc_h ', numdoc_h));
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_reset_box_status` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_reset_box_status`(barcod_in varchar(20), numdoc_in varchar(20))
BEGIN
	update box_barcod_cur_t set flag =0 , textstatus = '' where barcod =barcod_in and numdoc = numdoc_in and flag <>6; 
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_saveAndDelete_current_doc_h` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_saveAndDelete_current_doc_h`()
BEGIN
	
	REPLACE INTO document_h (numdoc,date,status,textstatus)
	SELECT numdoc,date,status,textstatus from document_h_cur;
	truncate table document_h_cur;
	truncate table document_h_selected;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_saveAndDelete_current_doc_t` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_saveAndDelete_current_doc_t`()
BEGIN
	/*вставим изменнные данные по телу накладной*/

	insert into log (datelog,timelog,username,textlog) select curdate() as dd, curtime() as tt, 
				(select namecass from cassir_cur limit 1) as n,
				concat('numdoc=',cast(tc.numdoc as char),' cod_good=', cast(tc.cod_good as char) , ' quant_fact=',cast(tc.quant_fact as char)) from document_t_cur as tc
				inner join document_t as t on tc.cod_good=t.cod_good and tc.numdoc=t.numdoc and ifnull(tc.quant_fact,0)<>ifnull(t.quant_fact,0);
	delete from log where datelog < adddate(curdate(),- 60);
	REPLACE INTO document_t (npp, numdoc, cod_good, quant, name, flag, quant_fact,textstatus,numstor,storplace,complarea,quant_breach)
	SELECT 					npp, numdoc, cod_good, quant, name, flag, quant_fact,textstatus,numstor,storplace,complarea,quant_breach from document_t_cur;
	replace into box_barcod (numdoc, barcod, quant, flag, textstatus)
	select numdoc, barcod, quant, flag, textstatus from box_barcod_cur_t;	  
	truncate table document_t_cur;
	truncate table barcod_cur;
	truncate table box_barcod_cur_t;
	truncate table box_cur;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_set_fact_quant` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_set_fact_quant`(numdoc_in varchar(20),barcod_in varchar(20), fact_in_quant int)
BEGIN
	declare v_flag int;
	select flag into v_flag from document_t_cur  where numdoc = numdoc_in and  cod_good = barcod_in;
	if v_flag<>4 then
		UPDATE document_t_cur d SET  
		d.quant_fact = fact_in_quant,
		
			d.flag=
				 case
					
						when quant>quant_fact  then 1
						when quant<quant_fact then 2
						when quant=quant_fact then 3
					
	 			end,
			d.textstatus=
				 case
					
						when quant>quant_fact then '>'
						when quant<quant_fact then '<'
						when quant=quant_fact then 'OK'
					
	 			end 
		WHERE 
		numdoc = numdoc_in and  cod_good = barcod_in;
	else
		UPDATE document_t_cur d SET  
		d.quant_fact = fact_in_quant
		WHERE 
		numdoc = numdoc_in and  cod_good = barcod_in;
	end if;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_set_quant_breach` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_set_quant_breach`(numdoc_in varchar(20),barcod_in varchar(20), breach_in_quant int)
BEGIN
		UPDATE document_t_cur d SET  
		d.quant_breach = breach_in_quant
		WHERE 
		numdoc = numdoc_in and  cod_good = barcod_in;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `sp_truncate_all` */;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `sp_truncate_all`()
BEGIN
	truncate table barcod;
	truncate table box_barcod;
	truncate table document_h;
	truncate table document_t;
	truncate table load_document_t;
	truncate table load_barcod;
	truncate table load_box_barcod;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `cashsrv` CHARACTER SET utf8 COLLATE utf8_general_ci ;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-10-23  3:02:26
