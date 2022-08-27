SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";

CREATE TABLE `waterlevel` (
  `id` int(11) NOT NULL,
  `level` varchar(255) NOT NULL,
  `date` date NOT NULL,
  `time` time NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

ALTER TABLE `waterlevel`
  ADD PRIMARY KEY (`id`);

ALTER TABLE `waterlevel`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;
COMMIT;